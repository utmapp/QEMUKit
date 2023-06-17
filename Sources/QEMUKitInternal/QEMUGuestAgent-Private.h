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

#import "QEMUGuestAgent.h"
#import "qga-qapi-types.h"

NS_ASSUME_NONNULL_BEGIN

@interface QEMUGuestAgentNetworkAddress (Private)

+ (instancetype)networkAddressFromQapi:(GuestIpAddress *)qapi;
- (instancetype)initFromQapi:(GuestIpAddress *)qapi;

@end

@interface QEMUGuestAgentNetworkInterface (Private)

+ (instancetype)networkInterfaceFromQapi:(GuestNetworkInterface *)qapi;
- (instancetype)initFromQapi:(GuestNetworkInterface *)qapi;

@end

@interface QEMUGuestAgentExecStatus (Private)

+ (instancetype)execStatusFromQapi:(GuestExecStatus *)qapi;
- (instancetype)initFromQapi:(GuestExecStatus *)qapi;

@end

NS_ASSUME_NONNULL_END
