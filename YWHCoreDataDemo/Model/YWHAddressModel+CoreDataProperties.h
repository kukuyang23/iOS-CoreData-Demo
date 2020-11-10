//
//  YWHAddressModel+CoreDataProperties.h
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//
//

#import "YWHAddressModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface YWHAddressModel (CoreDataProperties)

+ (NSFetchRequest<YWHAddressModel *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *address;
@property (nullable, nonatomic, copy) NSString *roomid;
@property (nullable, nonatomic, retain) NSSet<YWHAccountModel *> *account;

@end

@interface YWHAddressModel (CoreDataGeneratedAccessors)

- (void)addAccountObject:(YWHAccountModel *)value;
- (void)removeAccountObject:(YWHAccountModel *)value;
- (void)addAccount:(NSSet<YWHAccountModel *> *)values;
- (void)removeAccount:(NSSet<YWHAccountModel *> *)values;

@end

NS_ASSUME_NONNULL_END
