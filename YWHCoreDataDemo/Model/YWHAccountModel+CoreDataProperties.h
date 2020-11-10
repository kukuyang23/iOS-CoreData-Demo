//
//  YWHAccountModel+CoreDataProperties.h
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//
//

#import "YWHAccountModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface YWHAccountModel (CoreDataProperties)

+ (NSFetchRequest<YWHAccountModel *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *uuid;
@property (nullable, nonatomic, copy) NSString *nick;
@property (nullable, nonatomic, copy) NSDate *registerTime;
@property (nullable, nonatomic, retain) YWHAddressModel *address;

@end

NS_ASSUME_NONNULL_END
