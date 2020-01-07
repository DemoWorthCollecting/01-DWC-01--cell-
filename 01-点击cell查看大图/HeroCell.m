//
//  HeroCell.m
//  01-点击cell查看大图
//
//  Created by 李正林 on 2019/1/7.
//  Copyright © 2019 李正林. All rights reserved.
//

#import "HeroCell.h"
#import "HeroModel.h"

@implementation HeroCell

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        UIImageView *imageView = [[UIImageView alloc] init];
        _imageView = imageView;
        imageView.frame = self.contentView.bounds;
        [self.contentView addSubview:imageView];
    }
    return self;
}

- (void)setHeroModel:(HeroModel *)heroModel {
    _heroModel = heroModel;
    _imageView.image = [UIImage imageNamed:heroModel.icon];
}

@end
