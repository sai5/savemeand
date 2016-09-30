//
//  AppDelegate.h
//  saveme
//
//  Created by SAIRAM AGIREESHETTI on 9/30/16.
//  Copyright © 2016 SAIRAM AGIREESHETTI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

