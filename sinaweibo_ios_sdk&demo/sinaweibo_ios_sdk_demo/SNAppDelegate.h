//
//  SNAppDelegate.h
//  sinaweibo_ios_sdk_demo
//
//  Created by Wade Cheng on 4/23/12.
//  Copyright (c) 2012 SINA. All rights reserved.
//

#import <UIKit/UIKit.h>

/**将下面注释取消，并定义自己的app key，app secret以及授权跳转地址uri
 此demo即可编译运行**/

#define kAppKey             @"2008508918"
#define kAppSecret          @"12371de4ae1b592788d2de1ad5f6a7bf"
#define kAppRedirectURI     @"http://113.11.199.177:8899/start"

#ifndef kAppKey
#error
#endif

#ifndef kAppSecret
#error
#endif

#ifndef kAppRedirectURI
#error
#endif

@class SinaWeibo;
@class SNViewController;

@interface SNAppDelegate : UIResponder <UIApplicationDelegate>
{
    SinaWeibo *sinaweibo;
}

@property (readonly, nonatomic) SinaWeibo *sinaweibo;
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SNViewController *viewController;

@end
