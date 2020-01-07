//
//  HeroModel.m
//  01-点击cell查看大图
//
//  Created by 李正林 on 2019/1/7.
//  Copyright © 2019 李正林. All rights reserved.
//

#import "HeroModel.h"

@implementation HeroModel

+ (instancetype)heroModelWithDict:(NSDictionary *)dict {
    return [[self alloc] initWithDict:dict];
}
- (instancetype)initWithDict:(NSDictionary *)dict {
    if (self = [super init]) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

@end
