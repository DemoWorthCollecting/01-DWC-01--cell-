//
//  HeroModel.h
//  01-点击cell查看大图
//
//  Created by 李正林 on 2019/1/7.
//  Copyright © 2019 李正林. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HeroModel : NSObject

/** icon 英雄头像 */
@property (copy, nonatomic) NSString *icon;
/** intro 台词 */
@property (copy, nonatomic) NSString *intro;
/** name 姓名 */
@property (copy, nonatomic) NSString *name;

+ (instancetype)heroModelWithDict:(NSDictionary *)dict;
- (instancetype)initWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
