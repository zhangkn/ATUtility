//
//  UIView+ATUTility.h
//  ATUtility
//
//  Created by arvin.tan on 7/3/15.
//  Copyright (c) 2015 arvin.tan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSInteger, LinePosition) {
    LinePositionLeft = 0x1 << 0,
    LinePositionTop = 0x1 << 1,
    LinePositionRight = 0x1 << 2,
    LinePositionBottom = 0x1 << 3,
    LinePositionAll = LinePositionBottom | LinePositionLeft | LinePositionRight | LinePositionTop
};

NS_ASSUME_NONNULL_BEGIN
@interface UIView (ATUtility)

- (void)addDashLineInPosition:(LinePosition)position unitLength:(CGFloat)unitLength lineWidth:(CGFloat)lineWidth color:(UIColor *)color;
- (void)addSolidLineInPosition:(LinePosition)position lineWidth:(CGFloat)lineWidth color:(UIColor *)color;
- (void)addBorderWithWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius color:(UIColor *) borderColor;

- (void)addDashLineInPosition:(LinePosition)position unitLength:(CGFloat)unitLength lineWidth:(CGFloat)lineWidth color:(UIColor *)color scale:(BOOL)scale;
- (void)addSolidLineInPosition:(LinePosition)position lineWidth:(CGFloat)lineWidth color:(UIColor *)color scale:(BOOL)scale;
- (void)addBorderWithWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius color:(UIColor *) borderColor scale:(BOOL)scale;

- (UIImage * _Null_unspecified)snapshotImage;

@end
NS_ASSUME_NONNULL_END
