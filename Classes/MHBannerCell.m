//
//  MHBannerCell.m
//  foo
//
//  Created by J on 2017/5/31.
//  Copyright © 2017年 J. All rights reserved.
//

#import "MHBannerCell.h"

@implementation MHBannerCell
@synthesize itemView = _itemView;

- (void)layoutSubviews
{
    [super layoutSubviews];
    self.itemView.backgroundColor=[UIColor clearColor];
    self.backgroundColor=[UIColor clearColor];
    self.itemView.frame = self.bounds;
}

- (UIView *)itemView
{
    if (!_itemView) {
        _itemView = [[UIView alloc] init];
    }
    return _itemView;
}

- (void)setItemView:(UIView *)itemView
{
    if (_itemView) {
        [_itemView removeFromSuperview];
    }
    
    _itemView = itemView;
    
    [self addSubview:_itemView];
}

@end
