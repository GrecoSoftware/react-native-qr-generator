//
//  ZAPQRCode.h
//  ZapperMobilePos
//
//  Created by Keiran van Vuuren on 2018/05/30.
//  Copyright © 2018 Facebook. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <React/RCTViewManager.h>
#import "QRCodeGenerator.h"

@interface RNReactNativeQrcodeNative : RCTViewManager
@property (nonatomic, strong) NSString *value;
@property (nonatomic, strong) NSNumber *size;
@end
