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

#import "QEMUMonitor.h"

NS_ASSUME_NONNULL_BEGIN

/// An internal snapshot stored in one or more block nodes
@interface QEMUSnapshot : NSObject

/// Unique identifier assigned by the image format
@property (nonatomic, readonly) NSString *identifier;

/// Tag given when the snapshot was saved
@property (nonatomic, readonly) NSString *name;

/// Bytes used by the VM state, zero if the snapshot only contains disk state
@property (nonatomic, readonly) int64_t vmStateSize;

/// Wall clock time when the snapshot was saved
@property (nonatomic, readonly) NSDate *date;

/// Time the guest had been running when the snapshot was saved
@property (nonatomic, readonly) NSTimeInterval vmClock;

@end

@interface QEMUMonitor (BlockDevices)

@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSString *> *removableDrives;

- (BOOL)ejectDrive:(NSString *)drive force:(BOOL)force error:(NSError * _Nullable *)error;
- (BOOL)changeMediumForDrive:(NSString *)drive path:(NSString *)path error:(NSError * _Nullable *)error;
- (BOOL)changeMediumForDrive:(NSString *)drive path:(NSString *)path locking:(BOOL)locking error:(NSError * _Nullable __autoreleasing *)error;

/// Query internal snapshots of every block node
///
/// A snapshot saved with VM state spans multiple nodes and is returned once, from the node that holds the VM state.
/// - Parameter error: Error if the query failed
/// - Returns: Snapshots by name or nil on error
- (nullable NSArray<QEMUSnapshot *> *)snapshotsWithError:(NSError * _Nullable *)error;

@end

NS_ASSUME_NONNULL_END
