//
//  PTXAxle.h
//  PTBarChartView
//
//  Created by 彭平军 on 2017/3/29.
//  Copyright © 2017年 彭平军. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTXAxle : UIView
// x轴分段数量
@property (assign, nonatomic) NSUInteger numberOfParts;
// x轴标签数组
@property (strong, nonatomic) NSArray<NSString *> *texts;
// 标签字体颜色
@property (strong, nonatomic) UIColor *textColor;
// 显示x轴标签
- (void)showXAxleTextsWithBarSpacing:(CGFloat)barSpacing;
@end
