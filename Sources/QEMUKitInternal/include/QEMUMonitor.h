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

#import "QEMUManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface QEMUMonitor : QEMUManager

@property (nonatomic, weak) id<QEMUMonitorDelegate> delegate;

- (void)qmpEnterCommandModeWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)continueBootWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;

- (void)qemuPowerDownWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)qemuResetWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)qemuStopWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)qemuResumeWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)qemuQuitWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)qemuSaveSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)qemuDeleteSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)qemuRestoreSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion;

- (void)mouseIndexForAbsolute:(BOOL)absolute withCompletion:(void (^)(int64_t, NSError * _Nullable))completion;
- (void)mouseSelect:(int64_t)index withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion;

@end

NS_ASSUME_NONNULL_END
