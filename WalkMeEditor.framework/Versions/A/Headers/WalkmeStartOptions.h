//
//  WalkMeStartOptions.h
//  WalkMe
//
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WMStorageMode) {
    WMStorageModeLocal = 0,
    WMStorageModeRemote = 1
};

typedef NS_ENUM(NSInteger, WMAnalyticMode) {
    WMAnalyticModeOFF = 0,
    WMAnalyticModeON = 1
};

typedef NS_ENUM(NSInteger, WMLoggingMode) {
    WMLoggingModeNone = 0,
    WMLoggingModeStdout = 1,
    WMLoggingModeFile = 2, // curently not supported
    WMLoggingModeWalkme = 3, // curently not supported
};


@interface WalkMeStartOptions : NSObject

@property (nonatomic, strong) NSString *language;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, assign) WMLoggingMode loggingMode;
@property (nonatomic, assign) WMAnalyticMode analyticMode;
@property (nonatomic, assign) WMStorageMode storageMode;
@end
