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
#import "QEMUMonitorDelegate.h"

@class QEMULogging;
@protocol QEMUPort;

NS_ASSUME_NONNULL_BEGIN

@interface QEMUManager : NSObject

@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, weak) QEMULogging *logging;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithPort:(id<QEMUPort>)port NS_DESIGNATED_INITIALIZER;

/// Cancel any RPC command in-flight
- (void)cancel;

@end

NS_ASSUME_NONNULL_END
