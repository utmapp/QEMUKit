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
#import "QEMUPort.h"
#import "QEMUInterface.h"

NS_ASSUME_NONNULL_BEGIN

@protocol QEMUInterfaceConnectDelegate <NSObject>

- (void)qemuInterface:(id<QEMUInterface>)qemuInterface didErrorWithMessage:(NSString *)message;
- (void)qemuInterface:(id<QEMUInterface>)qemuInterface didCreateMonitorPort:(id<QEMUPort>)port;
- (void)qemuInterface:(id<QEMUInterface>)qemuInterface didCreateGuestAgentPort:(id<QEMUPort>)port;

@end

NS_ASSUME_NONNULL_END
