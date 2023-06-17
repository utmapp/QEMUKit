# QEMUKit
Swift interface to QEMU, QMP, and QEMU guest agent.

## Updating Interfaces
To update the generated sources to support a new release of QEMU, run:

```bash
$ ./generateQapi.sh /path/to/qemu
```

Where `/path/to/qemu` is a path to the QEMU source files.

## Usage
```swift
import QEMUKit
import QEMUKitInternal

Task {
    let qemu = QEMUVirtualMachine()
    // set delegate to handle events
    await qemuVM.setDelegate(...)
    // start QEMU using a launcher and interface implementation
    try await qemuVM.start(launcher: system, interface: ioService)
    // run something from the monitor
    try await qemuVM.monitor?.continueBoot()
    // run something from guest agent
    try await qemuVM.guestAgent?.guestSetTime(NSDate.now.timeIntervalSince1970)
}

```

Note: You must link with glib-2.0
