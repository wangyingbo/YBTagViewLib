//
//  YBCenterView.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/28.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface YBCenterView : UIView

/**
 *  中心红点的按钮
 */
@property (nonatomic, strong) UIButton *button;
/**
 *  中心红点的按钮显示图片
 */
@property (nonatomic, strong) UIImageView *imageView;

- (void)show;
- (void)dismiss;

- (void)startAnimation;
- (void)stopAnimation;

//- (instancetype)initWithPoint:(CGPoint)point;

@end
