//
//  WalkMe.h
//
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WalkmeStartOptions;

NS_ASSUME_NONNULL_BEGIN

@interface WalkMe: NSObject

+ (void)start:(NSString *)settingsURL options:(WalkmeStartOptions *)options;
+ (void)restart;
+ (void)stop;
    
+ (void)openMenu;
+ (void)closeMenu;

+ (void)changeLanguage:(NSString *)language;

+ (void)setWalkMeData:(NSString *)data forKey:(NSString *)key duration:(NSNumber *)duration;
+ (void)setUserId:(NSString *)userId;

+ (void)setAnalyticsMode;
+ (void)setLoggingMode;
+ (void)setStorageMode;

@end

NS_ASSUME_NONNULL_END
