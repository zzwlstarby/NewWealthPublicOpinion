//
//  AppDelegate+Extend.h
//  NewWealthPublicOpinion
//
//  Created by XAYQ-FanXL on 16/6/8.
//  Copyright © 2016年 XAYQ-FanXL. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (Extend)

- (void)initURLCache;

- (void)addShareSDKWithapplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)addJPushSDKWithapplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

@end
