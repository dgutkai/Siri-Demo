//
//  AppDelegate.h
//  SiriTest
//
//  Created by lanmi on 2017/6/19.
//  Copyright © 2017年 lanmi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

