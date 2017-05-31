//
//  MHBannerFooter.h
//  foo
//
//  Created by J on 2017/5/31.
//  Copyright © 2017年 J. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, MHBannerFooterState) {
    MHBannerFooterStateIdle = 0,    // 正常状态下的footer提示
    MHBannerFooterStateTrigger,     // 被拖至触发点的footer提示
};



@interface MHBannerFooter : UICollectionReusableView

@property (nonatomic, assign) MHBannerFooterState state;

@property (nonatomic, strong) UIImageView *arrowView;
@property (nonatomic, strong) UILabel *label;

@property (nonatomic, copy) NSString *idleTitle;
@property (nonatomic, copy) NSString *triggerTitle;



@end
