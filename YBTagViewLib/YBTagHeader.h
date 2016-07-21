
//
//  YBTagHeader.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/28.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#ifndef YBTagHeader_h
#define YBTagHeader_h

//屏幕的宽和高
#define FULL_WIDTH    [UIScreen mainScreen].bounds.size.width
#define FULL_HEIGHT   [UIScreen mainScreen].bounds.size.height

#define VIEW_W  FULL_WIDTH/375
#define VIEW_H  FULL_HEIGHT/667

//警告
#define   SHOW_ALTER(str)  [[[UIAlertView alloc]initWithTitle:@"点击了" message:str delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil] show]

#import "UIView+Extension.h"
#import "YBTagStyle.h"
#import "YBTagView.h"
#import "YBTagLabel.h"
#import "YBCenterView.h"
#import "YBFocusLayer.h"
#import "YBBranchLayer.h"
#import "YBTagGestureRecognizer.h"
#import "YBTag.h"

//快速的定义一个weakSelf 用于block里面
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
//警告

#endif /* YBTagHeader_h */
