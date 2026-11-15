import XCTest
@testable import QEMUKitInternal

/// An in-memory port standing in for QEMU or the guest agent on the other end.
private final class MockPort: NSObject, QEMUPort {
    var readDataHandler: readDataHandler_t?
    var errorHandler: errorHandler_t?
    var disconnectHandler: disconnectHandler_t?
    var isOpen: Bool { true }
    /// Reply to every command other than the guest agent's handshake.
    var commandReply = "{\"return\": {}}"

    func write(_ data: Data) {
        guard let command = try? JSONSerialization.jsonObject(with: data) as? [String: Any],
              let execute = command["execute"] as? String else {
            return // the 0xFF delimiter written before a handshake
        }
        let reply: [UInt8]
        if execute == "guest-sync-delimited",
           let arguments = command["arguments"] as? [String: Any],
           let id = arguments["id"] as? Int64 {
            // answer the handshake as qemu-ga does: delimiter, then the id
            reply = [0xff] + Array("{\"return\": \(id)}".utf8)
        } else {
            reply = Array(commandReply.utf8)
        }
        DispatchQueue.global().async {
            self.readDataHandler?(Data(reply))
        }
    }

    /// Delivers bytes as if the other end wrote them.
    func receive(_ string: String, prefix: [UInt8] = []) {
        readDataHandler?(Data(prefix + Array(string.utf8)))
    }
}

private final class StopDelegate: NSObject, QEMUMonitorDelegate {
    let stopped: XCTestExpectation
    init(_ stopped: XCTestExpectation) { self.stopped = stopped }
    func qemuHasStopped(_ monitor: QEMUMonitor) { stopped.fulfill() }
    func qemuHasReset(_ monitor: QEMUMonitor, guest: Bool) {}
    func qemuHasResumed(_ monitor: QEMUMonitor) {}
    func qemuHasSuspended(_ monitor: QEMUMonitor) {}
    func qemuHasWakeup(_ monitor: QEMUMonitor) {}
    func qemuWillQuit(_ monitor: QEMUMonitor, guest: Bool) {}
    func qemuError(_ monitor: QEMUMonitor, error: String) {}
    func qemuQmpDidConnect(_ monitor: QEMUMonitor) {}
}

final class QEMUManagerTests: XCTestCase {
    private let stopEvent = "{\"event\": \"STOP\", \"timestamp\": {\"seconds\": 0, \"microseconds\": 0}}"

    /// Runs a guest agent command and returns its error.
    private func guestSetTime(_ agent: QEMUGuestAgent) -> Error? {
        var result: Error?
        let done = expectation(description: "guest-set-time completed")
        agent.guestSetTime(0) { error in
            result = error
            done.fulfill()
        }
        wait(for: [done], timeout: 5)
        return result
    }

    /// The guest agent protocol has no events: a guest must not reach the QMP event dispatcher (utmapp/UTM#7684).
    func testGuestAgentIgnoresUnknownEvent() {
        let port = MockPort()
        let agent = QEMUGuestAgent(port: port)
        port.receive("{\"event\": \"X\"}\n", prefix: [0xff])
        // replies are handled in order after the event, so the agent is still working
        XCTAssertNil(guestSetTime(agent))
    }

    /// A known QMP event name from the guest must not be handled as if QEMU sent it.
    func testGuestAgentIgnoresMonitorEvent() {
        let port = MockPort()
        let agent = QEMUGuestAgent(port: port)
        port.receive(stopEvent, prefix: [0xff])
        XCTAssertNil(guestSetTime(agent))
    }

    /// QMP events QEMUKit does not know are ignored, and later events are still delivered.
    func testMonitorIgnoresUnknownEvent() {
        let port = MockPort()
        let monitor = QEMUMonitor(port: port)
        let delegate = StopDelegate(expectation(description: "stopped"))
        monitor.delegate = delegate
        port.receive("{\"event\": \"NOT_A_REAL_EVENT\", \"data\": {}}")
        port.receive("{\"event\": 1}")
        port.receive(stopEvent)
        waitForExpectations(timeout: 5)
    }

    /// Events QEMU sends on QMP still reach the monitor's delegate.
    func testMonitorDispatchesKnownEvent() {
        let port = MockPort()
        let monitor = QEMUMonitor(port: port)
        let delegate = StopDelegate(expectation(description: "stopped"))
        monitor.delegate = delegate
        port.receive(stopEvent)
        waitForExpectations(timeout: 5)
    }

    /// A malformed "error" reply to a command fails that command instead of crashing.
    func testGuestAgentErrorNotDictionary() {
        let port = MockPort()
        port.commandReply = "{\"error\": \"x\"}"
        XCTAssertNotNil(guestSetTime(QEMUGuestAgent(port: port)))
    }

    func testGuestAgentErrorWithoutDesc() {
        let port = MockPort()
        port.commandReply = "{\"error\": {}}"
        XCTAssertNotNil(guestSetTime(QEMUGuestAgent(port: port)))
    }

    /// A well-formed "error" reply keeps its description.
    func testGuestAgentErrorDesc() {
        let port = MockPort()
        port.commandReply = "{\"error\": {\"class\": \"GenericError\", \"desc\": \"denied\"}}"
        let error = guestSetTime(QEMUGuestAgent(port: port))
        XCTAssertEqual(error?.localizedDescription, "denied")
    }
}
