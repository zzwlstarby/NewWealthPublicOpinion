//
//  GroupBaseInfo.m
//  NewWealthPublicOpinion
//
//  Created by XAYQ-FanXL on 16/6/13.
//  Copyright © 2016年 XAYQ-FanXL. All rights reserved.
//

#import "GroupBaseInfo.h"

@implementation GroupBaseInfo

//主键
+(NSString *)getPrimaryKey
{
    return @"groupid";
}

+(NSString *)getTableName
{
    return @"GroupBaseTable";
}

+(int)getTableVersion
{
    return 1;
}

@end
