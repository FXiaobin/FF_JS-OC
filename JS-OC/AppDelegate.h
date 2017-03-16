//
//  AppDelegate.h
//  JS-OC
//
//  Created by fanxiaobin on 17/3/16.
//  Copyright © 2017年 fanxiaobin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) RootViewController *viewController;

@property (strong, nonatomic) UINavigationController *navgationController;

@end

