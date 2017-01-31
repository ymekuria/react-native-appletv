/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

#import <React/RCTComponent.h>

#if !TARGET_OS_TV

@interface RCTRefreshControl : UIRefreshControl

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) RCTDirectEventBlock onRefresh;

@end

#endif
