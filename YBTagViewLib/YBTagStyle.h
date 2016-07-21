//
//  YBTagStyle.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/29.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  当tagView有四个分支时
 */
typedef NS_ENUM(NSInteger, YBFourTagStyle) {
    /**
     *  左边0个右边4个
     */
    YBFourTagStyleZeroLeft = 0,
    /**
     *  左边1个右边3个
     */
    YBFourTagStyleOneLeft,
    /**
     *  左边2个右边2个
     */
    YBFourTagStyleTwoLeft,
    /**
     *  左边3个右边1个
     */
    YBFourTagStyleThreeLeft,
    /**
     *  左边4个右边0个
     */
    YBFourTagStyleAllLeft,
};


/**
 *  tagView有3个分支时
 */
typedef NS_ENUM(NSInteger, YBThreeTagStyle) {
    /**
     *  左边0个右边3个
     */
    YBThreeTagStyleZeroLeft = 0,
    /**
     *  左边1个右边2个
     */
    YBThreeTagStyleOneLeft,
    /**
     *  左边2个右边1个
     */
    YBThreeTagStyleTwoLeft,
    /**
     *  左边3个右边0个
     */
    YBThreeTagStyleAllLeft,
};


/**
 *  tagView有两个分支时
 */
typedef NS_ENUM(NSInteger, YBTwoTagStyle) {
    /**
     *  左边0个右边2个，且有倾斜角度
     */
    YBTwoTagStyleBothRightAskew = 0,
    /**
     *  左边2个右边0个，且有倾斜角度
     */
    YBTwoTagStyleBothLeftAskew,
    /**
     *  左边2个右边0个，垂直
     */
    YBTwoTagStyleBothLeftVertical,
    /**
     *  左边0个右边2个，垂直
     */
    YBTwoTagStyleBothRightVertical,
};


/**
 *  tagView有一个分支时
 */
typedef NS_ENUM(NSInteger, YBOneTagStyle) {
    /**
     *  1个在右边，有倾斜角度
     */
    YBOneTagStyleRightAskew=0,
    /**
     *  1个在左边，有倾斜角度
     */
    YBOneTagStyleLeftAskew,
    /**
     *  1个在左边，垂直
     */
    YBOneTagStyleLeftVertical,
    /**
     *  1个在右边，垂直
     */
    YBOneTagStyleRightVertical,
};


@interface YBTagStyle : NSObject

@property (nonatomic, assign) YBFourTagStyle YBFourTagStyle;
@property (nonatomic, assign) YBThreeTagStyle YBThreeTagStyle;
@property (nonatomic, assign) YBTwoTagStyle YBTwoTagStyle;
@property (nonatomic, assign) YBOneTagStyle YBOneTagStyle;

@end
