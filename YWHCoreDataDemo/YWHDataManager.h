//
//  YWHDataManager.h
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YWHDataManager : NSObject


+ (instancetype)sharedManager;
- (void)addDataWithID:(NSString *)uid;
- (void)deleteDataWithID:(NSString *)uid;
- (void)updateDataWithID:(NSString *)uid;
- (void)checkDataWithID:(NSString *)uid;
@end

NS_ASSUME_NONNULL_END
