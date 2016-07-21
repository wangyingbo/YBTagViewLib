//
//  YBTagView.h
//  YBTagView
//
//  Created by 王迎博 on 16/3/28.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <UIKit/UIKit.h>

#define TagViewW  150 //标签底部view的宽
#define TagViewH  100 //标签底部view的高
#define TagLabelH 30 // 标签上文字label的高
#define CenterViewW 35 //中心点按钮的宽
#define CenterViewH CenterViewW //中心点按钮的高
#define space 10  //从中心点到label之间的间隔距离
#define threeTagSpace 5 // 同上
#define perLabelH 40 //文字label的高
#define addLabelW 5 //

typedef void(^myBlock)(NSString *string,CGPoint centerPoint,NSArray *dataArray);
typedef void(^tagInfoBlock)(NSDictionary *dic);

@interface YBTagView : UIView

/**按住拖动手势*/
@property (nonatomic, strong) UIPanGestureRecognizer *panGestureRecognizer;
/**是否打开按住拖动功能*/
@property (nonatomic, assign) BOOL isPanGestureOnTagViewed;
/**tag的数组*/
@property (nonatomic, strong) NSArray *tagArray;

@property (nonatomic, strong) NSArray *tagDicArray;

@property (nonatomic, assign) CGPoint tagViewCenterPoint;

@property (nonatomic, assign) CGPoint selfCenter;

@property (nonatomic, copy) NSString *whichTag;

@property (nonatomic, copy) myBlock block;

@property (nonatomic, copy) tagInfoBlock tagBlock;

@property (nonatomic, assign) BOOL isClick;

@property (nonatomic, assign) NSInteger defaultStyle;

/**
 *  根据点来确定加上的标签页
 *
 *  @param point 触摸屏幕时点中的点
 *
 *  @return
 */
- (instancetype)initWithPoint:(CGPoint)point;



/**
 *  在图片上添加标签,添加完不可修改
 *
 *  @param point    触摸屏幕时点中的点
 *  @param array    有标签名字的数组
 *  @param tagStyle 标签的风格，传入的是枚举值
 *
 *  @return
 */
- (void)initWithPoint:(CGPoint)point array:(NSArray *)array tagStyle:(NSInteger)tagStyle;

- (void)setTagViewWithData:(NSDictionary *)dic;

- (instancetype)initShowTagView;

- (void)cleanSubViews;

@end
