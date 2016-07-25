//
//  SecondVC.m
//  YBTagViewDemo
//
//  Created by 王迎博 on 16/7/20.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import "SecondVC.h"
#import "YBTagHeader.h"

@interface SecondVC ()
@property (nonatomic, strong) UIImageView *imageView;
@end

@implementation SecondVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor lightGrayColor];
    
    //添加测试ImageView
    [self addImageView];
}

/**
 *  添加测试ImageView
 */
- (void)addImageView
{
    UIImageView *imageView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 300, 400)];
    imageView.image = [UIImage imageNamed:@"test"];
    imageView.center = self.view.center;
    imageView.userInteractionEnabled = YES;
    [self.view addSubview:imageView];
    self.imageView = imageView;
    
    UITapGestureRecognizer *tapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleTapGestureRecognizer:)];
    [self.imageView addGestureRecognizer:tapGestureRecognizer];
}


/**
 *  根据触摸位置，返回一个点，根据点来确定标签位置
 */
- (void)handleTapGestureRecognizer:(UITapGestureRecognizer *)tapGestureRecognizer
{
//    YBTag *tagView = [[YBTag alloc]initSelfWithPoint:point];
//    tagView.isEnableClick = YES;
//    [self.imageView addSubview:tagView];
//    tagView.contentArray = @[@"耐克",@"耐克air",@"700.00",@"美国"];
    
    
    CGPoint point = [tapGestureRecognizer locationInView:tapGestureRecognizer.view];
    YBTagView *tagView = [[YBTagView alloc]initWithPoint:point];
    tagView.isClick = YES;
    WS(weakSelf)
    tagView.block = ^(NSString *TagwhichTag,CGPoint centerPoint,NSArray *dataArray){
        SHOW_ALTER(TagwhichTag);
    };
    [self.imageView addSubview:tagView];
    tagView.tagArray = @[@"耐克",@"耐克air_plane"];//
    
}


@end
