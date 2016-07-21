//
//  YBTag.h
//  YBTagViewDemo
//
//  Created by 王迎博 on 16/7/20.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YBTagHeader.h"


@interface YBTag : UIView

@property (nonatomic, assign) BOOL isEnableClick;
@property (nonatomic, copy) NSArray *contentArray;


- (instancetype)initSelf;

- (void)yb_setPoint:(CGPoint)centerPoint contentArray:(NSArray *)contentArray tagStyle:(NSInteger)tagStyle;

- (instancetype)initSelfWithPoint:(CGPoint)point;

@end
