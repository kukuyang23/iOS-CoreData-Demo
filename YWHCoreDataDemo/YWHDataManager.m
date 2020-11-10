//
//  YWHDataManager.m
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//

#import "YWHDataManager.h"

@implementation YWHDataManager

+ (instancetype)sharedManager {
    
    static YWHDataManager *manager = nil;
    static dispatch_once_t once = nil;
    dispatch_once(&once, ^{
        manager = [[YWHDataManager alloc] init];
    });
    return manager;
}


@end
