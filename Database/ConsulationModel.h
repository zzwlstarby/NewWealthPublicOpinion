//
//  ConsulationModel.h
//  NewWealthPublicOpinion
//
//  Created by XAYQ-FanXL on 16/6/13.
//  Copyright © 2016年 XAYQ-FanXL. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import <LKDBHelper/LKDBHelper.h>

@interface ConsulationModel : JSONModel

@property (assign, nonatomic) int      newsid;
@property (assign, nonatomic) NSString * newsTitle;
@property (copy, nonatomic  ) NSString *strSource;
@property (copy, nonatomic  ) NSString *strUrl;
@property (assign, nonatomic) int      newstime;

@end
