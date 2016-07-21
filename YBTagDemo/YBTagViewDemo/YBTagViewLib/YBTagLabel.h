//
//  YBTagLabel.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/28.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol tagLabelDelegate <NSObject>

- (void)tagLabelDelegateMethod:(NSString *)string;

@required
@optional

@end

@interface YBTagLabel : UILabel

@property (nonatomic, assign) CGPoint leftPoint;
@property (nonatomic, assign) CGPoint rightPoint;
@property (nonatomic, strong) UIView *lineView;

@property (nonatomic,assign)id<tagLabelDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame withString:(NSString *)string;

- (void)delay;

@property (nonatomic, assign) CGFloat selfW;
@property (nonatomic, copy) NSString *selfStr;

@end
