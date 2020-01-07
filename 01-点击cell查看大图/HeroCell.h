//
//  HeroCell.h
//  01-点击cell查看大图
//
//  Created by 李正林 on 2019/1/7.
//  Copyright © 2019 李正林. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HeroModel;

NS_ASSUME_NONNULL_BEGIN

@interface HeroCell : UICollectionViewCell

/** heroModel */
@property (strong, nonatomic) HeroModel *heroModel;

/** 因为外界要用到imageView，所有暴露出来 */
@property (weak, nonatomic) UIImageView *imageView;

@end

NS_ASSUME_NONNULL_END
