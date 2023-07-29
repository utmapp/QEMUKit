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

#import <Foundation/Foundation.h>
#import "QEMULoggingDelegate.h"

NS_ASSUME_NONNULL_BEGIN

#define QEMUKitLog(...) _QEMUKitLog(self.logging, __VA_ARGS__)
void _QEMUKitLog(QEMULogging *logging, NSString *format, ...) NS_FORMAT_FUNCTION(2,3) NS_NO_TAIL_CALL;

@interface QEMULogging : NSObject

@property (nonatomic, readonly) NSPipe *standardOutput;
@property (nonatomic, readonly) NSPipe *standardError;
@property (nonatomic, weak) id<QEMULoggingDelegate> delegate;

+ (QEMULogging *)sharedInstance;

- (void)logToFile:(NSURL *)path;
- (void)endLog;
- (void)writeLine:(NSString *)line;

@end

NS_ASSUME_NONNULL_END
