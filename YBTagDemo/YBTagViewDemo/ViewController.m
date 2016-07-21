//
//  ViewController.m
//  YBTagViewDemo
//
//  Created by 王迎博 on 16/7/20.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import "ViewController.h"
#import "YBTagHeader.h"


@interface ViewController ()

@property (nonatomic, strong) UIImageView *imageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor lightGrayColor];
    
    //添加测试ImageView
    [self addImageView];
    
    //添加树状标签，不能点击和拖拽
    [self addBranchTag];
}


/**
 *  添加测试ImageView
 */
- (void)addImageView
{
    UIImageView *imageView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 300, 450)];
    imageView.image = [UIImage imageNamed:@"test"];
    imageView.center = self.view.center;
    imageView.userInteractionEnabled = YES;
    [self.view addSubview:imageView];
    self.imageView = imageView;
}


/**
 *  添加树状标签，不能点击和拖拽
 */
- (void)addBranchTag
{
    YBTag *tagView = [[YBTag alloc]initSelf];
    [tagView yb_setPoint:CGPointMake(150, 150) contentArray:@[@"耐克",@"耐克air",@"700.00",@"美国"] tagStyle:YBFourTagStyleThreeLeft];
    tagView.isEnableClick = NO;
    [self.imageView addSubview:tagView];
    
    
//    YBTagView *tagView = [[YBTagView alloc]initShowTagView];
//    [tagView initWithPoint:CGPointMake(150, 150) array:@[@"耐克",@"耐克air",@"700.00",@"美国"] tagStyle:3];
//    tagView.isClick = NO;
//    [self.imageView addSubview:tagView];
//    tagView.center = CGPointMake(150, 150);
}




@end
