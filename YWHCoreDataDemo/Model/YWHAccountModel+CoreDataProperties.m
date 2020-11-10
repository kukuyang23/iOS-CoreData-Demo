//
//  YWHAccountModel+CoreDataProperties.m
//  YWHCoreDataDemo
//
//  Created by 杨文豪 on 2020/11/10.
//
//

#import "YWHAccountModel+CoreDataProperties.h"

@implementation YWHAccountModel (CoreDataProperties)

+ (NSFetchRequest<YWHAccountModel *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"YWHAccountModel"];
}

@dynamic uuid;
@dynamic nick;
@dynamic registerTime;
@dynamic address;

@end
