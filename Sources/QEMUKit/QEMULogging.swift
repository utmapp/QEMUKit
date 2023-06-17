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

import QEMUKitInternal

let logger = QEMULogging.sharedInstance()

extension QEMULogging {
    func info(_ message: @autoclosure () -> QEMULoggingMessage,
                     file: String = #fileID, function: String = #function, line: UInt = #line) {
        self.writeLine(message().description)
    }
    
    func error(_ message: @autoclosure () -> QEMULoggingMessage,
                     file: String = #fileID, function: String = #function, line: UInt = #line) {
        // currently all messages are printed
        self.info(message(), file: file, function: function, line: line)
    }
}

struct QEMULoggingMessage: ExpressibleByStringLiteral, Equatable, CustomStringConvertible, ExpressibleByStringInterpolation {
    public typealias StringLiteralType = String

    private var value: String

    public init(stringLiteral value: String) {
        self.value = value
    }

    public var description: String {
        return self.value
    }
}
