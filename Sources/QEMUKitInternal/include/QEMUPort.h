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

NS_ASSUME_NONNULL_BEGIN

@protocol QEMUPort <NSObject>

typedef void (^readDataHandler_t)(NSData *data);
typedef void (^errorHandler_t)(NSString *error);
typedef void (^disconnectHandler_t)(void);

/// Set to a block to handle incoming data
@property (nonatomic, nullable) readDataHandler_t readDataHandler;

/// Set to a block to handle error messages
@property (nonatomic, nullable) errorHandler_t errorHandler;

/// Set to a block to handle disconnects
@property (nonatomic, nullable) disconnectHandler_t disconnectHandler;

/// Port is open at the other end
@property (nonatomic, readonly) BOOL isOpen;

/// Write data to port
/// @param data Data to write
- (void)writeData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
