//
//  WalkMe.h
//
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WalkMeStartOptions.h"
#import "WalkMeCallbackTypes.h"
#import "WalkmeSDKDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface WalkMe : NSObject

+ (void)start:(NSString *)settingsURL options:(nullable WalkMeStartOptions *)options;
+ (void)restart:(nullable WalkMeStartOptions *)options;
+ (void)stop;
+ (void)setDelegate:(id<WalkmeSDKDelegate>)delegate;
+ (BOOL)isRunning;
+ (BOOL)isActive:(NSError**)error;

+ (void)openMenu;
+ (void)closeMenu;
+ (void)toggleMenu;

+ (void)changeLanguage:(NSString *)language;
+ (void)setWalkMeData:(NSString *)data forKey:(NSString *)key duration:(NSNumber *)duration;
+ (void)setUserId:(NSString *)userId;

+ (void)setAnalyticsMode:(WMAnalyticMode)mode;
+ (void)setLoggingMode:(WMLoggingMode)mode;
+ (void)setLoggingPath:(NSString*)path;

+ (void)setStorageMode:(WMStorageMode)storageMode; // If it's called, it should be done before the Walkme SDK Started
+ (void)setWidgetTheme:(NSString*)theme;
+ (void)setWidgetVisibility:(BOOL)isVisible;

+ (void)setHttpHeader:(NSString*)value forKey:(NSString*)key;
+ (void)setProxy:(NSString*)url;

+ (void)setRawHttpRequestCallback:(WMHTTPRequestCallback)requestCallback;
+ (void)invokeRawHttpRequest: (NSURLRequest*)request;
@end

NS_ASSUME_NONNULL_END
