//
//  RAPIAppDelegate.h
//  ReachabilityAPI
//
//  Created by BitterBoy on 14-9-12.
//  Copyright (c) 2014年 coco. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@interface RAPIAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(NSString *)stringFromStatus:(NetworkStatus )status;

@end
