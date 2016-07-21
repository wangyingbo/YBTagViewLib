//
//  YBBranchLayer.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/29.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface YBBranchLayer : CAShapeLayer

@property (nonatomic, strong) CABasicAnimation *animation;

- (void)commitPathWithStartPoint:(CGPoint)startPoint midPoint:(CGPoint)midPoint endPoint:(CGPoint)endPoint withBlock:(void(^)(CGFloat time))block;

//- (void)animationDelay:(NSTimeInterval)delay With:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

@end
