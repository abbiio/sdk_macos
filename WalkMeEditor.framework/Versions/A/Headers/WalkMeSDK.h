//
//  WalkMe.h
//  WalkMeSDK-macOS
//
//  Created by Haim Ben Chimol on 18/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WalkMe : NSObject

+ (void)start:(NSString*)settingsURL options:(NSDictionary* _Nullable)options;
+ (void)restart;
+ (void)stop;
// ui
+ (void)openMenu;
+ (void)closeMenu;
// functional
+ (void)changeLanguage: (NSString*)language;
// data
+ (void)setWalkMeData:(NSString*)data forKey:(NSString*)key duration:(NSNumber*)duration;
+ (void)setEndUserId:(NSString*)userId;
// dev
+ (void)setAnalyticsMode; // enum
+ (void)setLoggingMode;   // enum
+ (void)setStorageMode;   // enum
@end

NS_ASSUME_NONNULL_END
