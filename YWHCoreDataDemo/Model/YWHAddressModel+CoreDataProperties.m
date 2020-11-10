//
//  YWHAddressModel+CoreDataProperties.m
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//
//

#import "YWHAddressModel+CoreDataProperties.h"

@implementation YWHAddressModel (CoreDataProperties)

+ (NSFetchRequest<YWHAddressModel *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"YWHAddressModel"];
}

@dynamic address;
@dynamic roomid;
@dynamic account;

@end
