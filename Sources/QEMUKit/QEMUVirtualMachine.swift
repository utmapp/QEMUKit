//
// Copyright © 2023 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

import Foundation
import QEMUKitInternal

private let kMaxConnectAttempts = 15
private let kConnectRetryDelay = 1*NSEC_PER_SEC

private typealias InterfaceConnectAttempt = (continuation: CheckedContinuation<QEMUMonitor, any Error>, interface: any QEMUInterface, remainingAttempts: Int)

/// Interface to control a QEMU virtual machine
public actor QEMUVirtualMachine {
    /// Internal state of this actor
    private enum State {
        /// Idle state. Also after QEMU process terminates.
        case stopped
        /// After calling `start` but before it is completed.
        case starting
        /// VM is running.`
        case started
        /// Recieved QMP event indicating VM is stopping.
        case stopping
    }
    
    /// Interface for QMP functionality
    public private(set) var monitor: QEMUMonitor?
    
    /// Interface for guest agent functionality
    public private(set) var guestAgent: QEMUGuestAgent?
    
    /// Interface to handle QEMU process
    public private(set) var launcher: (any QEMULauncher)?
    
    /// Interface to handle QEMU interface
    public private(set) var interface: (any QEMUInterface)?
    
    /// When set, standard output and error will be redirected to this file URL
    public var redirectLogURL: URL?
    
    /// Delegate to handle VM events
    public weak var delegate: (any QEMUVirtualMachineDelegate)?
    
    /// For bridging delegate pattern to Swift Concurrency
    private lazy var coordinator: QEMUCoordinator = {
        QEMUCoordinator(for: self)
    }()
    
    /// Set during `start()` to support connecting to the interface with multiple attempts
    private var interfaceConnectAttempt: InterfaceConnectAttempt?
    
    /// Set during `start()` to wait for QMP to connect
    private var qmpConnectContinuation: CheckedContinuation<Void, Never>?
    
    /// Internal state of the virtual machine
    private var state: State = .stopped
    
    public init() {
        
    }
    
    /// Set the delegate to handle VM events
    /// - Parameter delegate: Delegate
    public func setDelegate(_ delegate: (any QEMUVirtualMachineDelegate)?) {
        self.delegate = delegate
    }
    
    /// Set the redirect log file
    /// - Parameter url: File URL (nil to unset)
    public func setRedirectLog(url: URL?) {
        self.redirectLogURL = url
    }
    
    /// Start a new QEMU instance
    ///
    /// The caller provides a `launcher` and a `ui` which are used in the startup process.
    /// The following are done in order:
    ///   1. `launcher.startQemu()` is called which delegates the QEMU process startup.
    ///   2. `interface.connect()` is called which delegates the UI connection attempt loop.
    ///   3. When the UI interface is connected, `qemuInterface(:didCreateMonitorPort:)` is called.
    ///   4. The callback will construct a `QEMUMonitor` and its delegate.
    ///   5. The monitor will call `qemuQmpDidConnect()` which indicates a successful start.
    /// - Parameters:
    ///   - launcher: QEMU process launcher interface
    ///   - interface: QEMU connection interface
    public func start(launcher: any QEMULauncher, interface: any QEMUInterface) async throws {
        guard state == .stopped else {
            throw QEMUError.operationNotAvailable
        }
#if DEBUG
        assert(self.monitor == nil)
        assert(self.guestAgent == nil)
        assert(self.launcher == nil)
        assert(self.interface == nil)
#endif
        state = .starting
        defer {
            // clean up the state if we failed to start
            if state == .starting {
                state = .stopped
                // potentially a race could set guestAgent
                // other variables should not be set
                guestAgent = nil
            }
        }
        
        // launch qemu
        try Task.checkCancellation()
        let logging: QEMULogging
#if os(macOS)
        logging = QEMULogging()
#else // on iOS we do not have processes
        logging = QEMULogging.sharedInstance()
#endif
        logging.delegate = coordinator
        if let redirectLogURL = redirectLogURL {
            logging.log(toFile: redirectLogURL)
        }
        launcher.logging = logging
        launcher.launcherDelegate = coordinator
        try await launcher.startQemu()
        
        // wait for QMP to connect
        try Task.checkCancellation()
        let monitor = try await withTaskCancellationHandler {
            try await withCheckedThrowingContinuation { continuation in
                self.interfaceConnectAttempt = (continuation, interface, kMaxConnectAttempts)
                interface.connectDelegate = coordinator
                do {
                    try interface.connect()
                } catch {
                    didError(error)
                }
            }
        } onCancel: {
            interface.disconnect()
            Task {
                await interfaceConnectCancel()
            }
        }
        monitor.delegate = coordinator
        monitor.logging = logging
        
        // wait for QMP connection
        try Task.checkCancellation()
        await withTaskCancellationHandler {
            await withCheckedContinuation { continuation in
                self.qmpConnectContinuation = continuation
                // if we race and miss the didConnectQMP() event
                if monitor.isConnected {
                    self.qmpConnectContinuation = nil
                    continuation.resume()
                }
            }
        } onCancel: {
            monitor.delegate = nil
            Task {
                // fake the connection to trigger Task.checkCancellation() below
                await didConnectQMP()
            }
        }

        // check if we had already terminated due to early error
        try Task.checkCancellation()
        guard monitor.isConnected else {
            throw QEMUError.terminatedUnexpectedly
        }

        // enter command mode
        try await monitor.qmpEnterCommandMode()
        self.monitor = monitor
        self.launcher = launcher
        self.interface = interface
        state = .started
        delegate?.qemuVMDidStart(self)
    }
    
    /// Stops a running instance of QEMU
    public func stop() async throws {
        guard state != .stopped else {
            return // nothing to do
        }
        guard state == .started else {
            throw QEMUError.operationNotAvailable
        }
#if DEBUG
        assert(monitor != nil)
#endif
        do {
            try await monitor!.qemuQuit()
        } catch {
            // if we're already stopped, ignore any errors
            if state != .stopped {
                throw error
            }
        }

    }
    
    /// Forceabily stop a running instance of QEMU
    public func kill() {
        guard state != .stopped else {
            return // nothing to do
        }
        state = .stopped
        // unregister delegates
        monitor?.delegate = nil
        launcher?.launcherDelegate = nil
        interface?.connectDelegate = nil
        // stop process
        launcher?.stopQemu()
        interface?.disconnect()
        launcher?.logging?.endLog()
        // cancel any RPC
        monitor?.cancel()
        guestAgent?.cancel()
        // clear properties
        monitor = nil
        guestAgent = nil
        launcher = nil
        interface = nil
        delegate?.qemuVMDidStop(self)
    }
    
    fileprivate func didConnectMonitor(_ monitor: QEMUMonitor) {
#if DEBUG
        assert(state == .starting)
#endif
        if let attempt = interfaceConnectAttempt {
            interfaceConnectAttempt = nil
            attempt.continuation.resume(returning: monitor)
        }
    }
    
    fileprivate func didConnectQMP() {
#if DEBUG
        assert(state == .starting)
#endif
        qmpConnectContinuation?.resume()
        qmpConnectContinuation = nil
    }
    
    fileprivate func didConnectGuestAgent(_ guestAgent: QEMUGuestAgent) {
        guard state == .starting || state == .started else {
            logger.info("Ignoring guest agent in state: \(state)")
            return
        }
        self.guestAgent = guestAgent
        guestAgent.guestSetTime(NSDate.now.timeIntervalSince1970)
        guestAgent.logging = launcher?.logging
    }
    
    fileprivate func didError(_ error: Error) {
        // special case when error comes during startup
        if !interfaceConnectRetry(on: error) {
            delegate?.qemuVM(self, didError: error)
        }
    }
    
    /// Retry interface connection attempt
    /// - Parameter error: Error that triggered the retry
    /// - Returns: true if we are handling a connect attempt
    private func interfaceConnectRetry(on error: Error) -> Bool {
        guard let attempt = interfaceConnectAttempt else {
            return false
        }
#if DEBUG
        assert(state == .starting)
#endif
        if case QEMUError.uiError = error, attempt.remainingAttempts > 0 {
            interfaceConnectAttempt!.remainingAttempts -= 1
            Task {
                try await Task.sleep(nanoseconds: kConnectRetryDelay)
                do {
                    logger.info("Retrying interface connection...")
                    try attempt.interface.connect()
                } catch {
                    didError(error)
                }
            }
        } else {
            interfaceConnectAttempt = nil
            attempt.interface.disconnect()
            attempt.continuation.resume(throwing: error)
        }
        return true
    }
    
    /// Cancel the interface connection attempt
    private func interfaceConnectCancel() -> Bool {
        // if we were raced and the retry was successful
        guard let attempt = interfaceConnectAttempt else {
            return false
        }
#if DEBUG
        assert(state == .starting)
#endif
        interfaceConnectAttempt = nil
        attempt.interface.disconnect()
        attempt.continuation.resume(throwing: CancellationError())
        return true
    }
    
    /// Called when QMP posts a "will quip" event
    ///
    /// If called while not started, this is an unexpected termination error.
    fileprivate func willStop() {
        guard state == .started else {
            didError(QEMUError.terminatedUnexpectedly)
            return
        }
        state = .stopping
        delegate?.qemuVMWillStop(self)
    }
    
    /// Called when QEMU process has exited
    ///
    /// If QEMU is starting, ignore event, otherwise kill the service
    fileprivate func didStop() {
        if let _qmpConnectContinuation = qmpConnectContinuation {
            qmpConnectContinuation = nil
            _qmpConnectContinuation.resume()
        }
        if state != .starting || !interfaceConnectCancel() {
            kill()
        }
    }
}

// MARK: - Errors

private enum QEMUError: Error {
    case qemuError(String)
    case monitorError(String)
    case uiError(String)
    case operationNotAvailable
    case timedOutWaitingForMonitor
    case terminatedUnexpectedly
}

extension QEMUError: LocalizedError {
    var errorDescription: String? {
        switch self {
        case .qemuError(let message), .monitorError(let message):
            return String.localizedStringWithFormat(NSLocalizedString("QEMU error: %@", comment: "QEMUVirtualMachine"), message)
        case .uiError(let message):
            return String.localizedStringWithFormat(NSLocalizedString("UI error: %@", comment: "QEMUVirtualMachine"), message)
        case .operationNotAvailable:
            return NSLocalizedString("Operation is not available.", comment: "QEMUVirtualMachine")
        case .timedOutWaitingForMonitor:
            return NSLocalizedString("Timed out waiting for QEMU monitor to connect.", comment: "QEMUVirtualMachine")
        case .terminatedUnexpectedly:
            return NSLocalizedString("QEMU has terminated unexpectedly.", comment: "QEMUVirtualMachine")
        }
    }
}

// MARK: - Coordinator

private class QEMUCoordinator: NSObject {
    let operations: QEMUVirtualMachine
    private var lastErrorLine: String?
    
    init(for operations: QEMUVirtualMachine) {
        self.operations = operations
    }
}

// MARK: - Launcher delegate

extension QEMUCoordinator: QEMULauncherDelegate {
    func qemuLauncher(_ qemuLauncher: QEMULauncher, didExitWithExitCode exitCode: Int, message: String?) {
        logger.info("QEMU exited with code \(exitCode): \(message ?? "(no message)")")
        if exitCode != 0 {
            let unknown = NSLocalizedString("Unknown", comment: "QEMUVirtualMachine")
            let message = message ?? String.localizedStringWithFormat(NSLocalizedString("QEMU exited from an error: %@", comment: "QEMUVirtualMachine"), lastErrorLine ?? unknown)
            Task {
                await operations.didError(QEMUError.qemuError(message))
                await operations.didStop()
            }
        } else {
            Task {
                await operations.didStop()
            }
        }
    }
}

// MARK: - Monitor delegate

extension QEMUCoordinator: QEMUMonitorDelegate {
    func qemuHasWakeup(_ monitor: QEMUMonitor) {
        logger.info("qemuHasWakeup")
    }
    
    func qemuHasResumed(_ monitor: QEMUMonitor) {
        logger.info("qemuHasResumed")
        Task {
            try? await operations.guestAgent?.guestSetTime(NSDate.now.timeIntervalSince1970)
        }
    }
    
    func qemuHasStopped(_ monitor: QEMUMonitor) {
        logger.info("qemuHasStopped")
    }
    
    func qemuHasReset(_ monitor: QEMUMonitor, guest: Bool) {
        logger.info("qemuHasReset")
    }
    
    func qemuHasSuspended(_ monitor: QEMUMonitor) {
        logger.info("qemuHasSuspended")
    }
    
    func qemuWillQuit(_ monitor: QEMUMonitor, guest: Bool) {
        logger.info("qemuWillQuit")
        Task {
            await operations.willStop()
        }
    }
    
    func qemuError(_ monitor: QEMUMonitor, error: String) {
        logger.error("qemuError: \(error)")
        Task {
            await operations.didError(QEMUError.monitorError(error))
        }
    }
    
    // this is called right before we execute qmp_cont so we can setup additional option
    func qemuQmpDidConnect(_ monitor: QEMUMonitor) {
        logger.info("qemuQmpDidConnect")
        Task {
            await operations.didConnectQMP()
        }
    }
}

// MARK: - UI delegate

extension QEMUCoordinator: QEMUInterfaceConnectDelegate {
    func qemuInterface(_ qemuInterface: QEMUInterface, didErrorWithMessage message: String) {
        logger.error("UI Error: \(message)")
        Task {
            await operations.didError(QEMUError.uiError(message))
        }
    }
    
    func qemuInterface(_ qemuInterface: QEMUInterface, didCreateMonitorPort port: QEMUPort) {
        logger.info("Monitor port created")
        let monitor = QEMUMonitor(port: port)
        Task {
            await operations.didConnectMonitor(monitor)
        }
    }
    
    func qemuInterface(_ qemuInterface: QEMUInterface, didCreateGuestAgentPort port: QEMUPort) {
        logger.info("Guest agent port created")
        let agent = QEMUGuestAgent(port: port)
        Task {
            await operations.didConnectGuestAgent(agent)
        }
    }
}

// MARK: - Logging delegate

extension QEMUCoordinator: QEMULoggingDelegate {
    func logging(_ logging: QEMULogging, didRecieveErrorLine line: String) {
        lastErrorLine = line
    }
    
    func logging(_ logging: QEMULogging, didRecieveOutputLine line: String) {
        if line.hasPrefix("char device") {
            parseCharDeviceLine(line)
        }
    }
    
    private func parseCharDeviceLine(_ line: String) {
        let scanner = Scanner(string: line)
        var success = true
        success = success && scanner.scanString("char device redirected to ") != nil
        let devpath = scanner.scanUpToString(" ")
        success = success && devpath != nil
        success = success && scanner.scanString("(label ") != nil
        let label = scanner.scanUpToString(")")
        success = success && label != nil
        success = success && scanner.scanString(")") != nil
        if scanner.isAtEnd && success {
            logger.info("Detected PTTY at '\(devpath!)' for device \(label!)")
            Task {
                await operations.delegate?.qemuVM(operations, didCreatePttyDevice: devpath!, label: label!)
            }
        } else {
            logger.error("Cannot parse char device line: \(line)")
        }
    }
}
