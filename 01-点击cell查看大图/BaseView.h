//
//  BaseView.h
//  01-点击cell查看大图
//
//  Created by 李正林 on 2019/1/7.
//  Copyright © 2019 李正林. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseView : UIView

/** 图片url数组 */
@property (strong, nonatomic) NSArray *iconArray;
/** index 模型在数组中的下标；或者说cell的row */
@property (assign, nonatomic) NSInteger index;
/** rectArray */
@property (strong, nonatomic) NSArray<NSString *> *rectArray;

@end

NS_ASSUME_NONNULL_END
