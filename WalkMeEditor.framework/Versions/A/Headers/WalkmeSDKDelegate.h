//
//  WalkmeSDKDelegate.h
//  WalkMeSDK-macOS
//
//  Created by Vova Sarkisyan on 18/11/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WalkmeSDKDelegate_h
#define WalkmeSDKDelegate_h

typedef NS_ENUM(NSInteger, WMMenuState) {
    WMMenuStateOpen = 0,
    WMMenuStateClosed = 1
};

@protocol WalkmeSDKDelegate <NSObject>

@optional
-(void)menuStateDidChange:(WMMenuState)newState;

@end


#endif /* WalkmeSDKDelegate_h */
