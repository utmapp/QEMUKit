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

public protocol QEMUVirtualMachineDelegate: AnyObject {
    /// Called when QEMU started up successfully
    /// - Parameter qemuVM: QEMU VM
    func qemuVMDidStart(_ qemuVM: QEMUVirtualMachine)
    
    /// Called when QMP posts a "will quit" notification
    /// - Parameter qemuVM: QEMU VM
    func qemuVMWillStop(_ qemuVM: QEMUVirtualMachine)
    
    /// Called when QEMU process terminates
    /// - Parameter qemuVM: QEMU VM
    func qemuVMDidStop(_ qemuVM: QEMUVirtualMachine)
    
    /// Called when QEMU or QMP throws an error
    /// - Parameters:
    ///   - qemuVM: QEMU VM
    ///   - error: Error seen
    func qemuVM(_ qemuVM: QEMUVirtualMachine, didError error: any Error)
    
    /// Called when QEMU created a PTTY device
    /// - Parameters:
    ///   - qemuVM: QEMU VM
    ///   - path: Path of the PTTY device
    ///   - label: QEMU identifier for the device
    func qemuVM(_ qemuVM: QEMUVirtualMachine, didCreatePttyDevice path: String, label: String)
}
