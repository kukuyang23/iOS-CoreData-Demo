//
//  AppDelegate.h
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;
@property (nonatomic, strong) UIWindow *window;

- (void)saveContext;


@end

