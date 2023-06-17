// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "QEMUKit",
    platforms: [
        .iOS(.v13), .macOS(.v10_15)
    ],
    products: [
        .library(
            name: "QEMUKit",
            targets: ["QEMUKit", "QEMUKitInternal"]),
    ],
    targets: [
        .target(
            name: "QEMUKit",
            dependencies: ["QEMUKitInternal"]),
        .target(
            name: "QEMUKitInternal",
            exclude: ["External/include"],
            cSettings: [.headerSearchPath("qapi"),
                        .headerSearchPath("External/qapi"),
                        .headerSearchPath("External/qga"),
                        .headerSearchPath("External/include"),
                        .headerSearchPath("External/include/glib-2.0")]),
        .testTarget(
            name: "QEMUKitTests",
            dependencies: ["QEMUKit"]),
    ]
)
