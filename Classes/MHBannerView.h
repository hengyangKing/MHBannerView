//
//  MHBannerView.h
//  foo
//
//  Created by J on 2017/5/31.
//  Copyright © 2017年 J. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHBannerFooter.h"

@protocol MHBannerViewDataSource, MHBannerViewDelegate;
@interface MHBannerView : UIView

/** 是否需要循环滚动, 默认为 NO */
@property (nonatomic, assign) IBInspectable BOOL shouldLoop;

/** 是否显示footer, 默认为 NO (此属性为YES时, shouldLoop会被置为NO) */
@property (nonatomic, assign) IBInspectable BOOL showFooter;

/** 是否自动滑动, 默认为 NO */
@property (nonatomic, assign) IBInspectable BOOL autoScroll;

/** 自动滑动间隔时间(s), 默认为 3.0 */
@property (nonatomic, assign) IBInspectable CGFloat scrollInterval;

/** pageControl, 可自由配置其属性 */
@property (nonatomic, strong, readonly) UIPageControl *pageControl;

@property (nonatomic, weak) IBOutlet id<MHBannerViewDataSource> dataSource;
@property (nonatomic, weak) IBOutlet id<MHBannerViewDelegate> delegate;

- (void)reloadData;

- (void)startTimer;
- (void)stopTimer;

@end


@protocol MHBannerViewDataSource <NSObject>
@required

- (NSInteger)numberOfItemsInBanner:(MHBannerView *)banner;
- (UIView *)banner:(MHBannerView *)banner viewForItemAtIndex:(NSInteger)index;

@optional

- (NSString *)banner:(MHBannerView *)banner titleForFooterWithState:(MHBannerFooterState)footerState;

@end

@protocol MHBannerViewDelegate <NSObject>
@optional

- (void)banner:(MHBannerView *)banner didSelectItemAtIndex:(NSInteger)index;
- (void)bannerFooterDidTrigger:(MHBannerView *)banner;

@end

