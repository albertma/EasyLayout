//
//  EasyLayout.h
//
//  Created by Ben Ford on 1/22/13.
//  Copyright (c) 2013 Ben Ford
//

#import <UIKit/UIKit.h>
#import "QuickFrame.h"


@interface UIView(EasyLayoutMethods)
@property (nonatomic, assign) CGPoint extOrigin;
@property (nonatomic, assign) CGSize extSize;
@property (nonatomic, readonly) CGPoint extTerminus;
@property (nonatomic, readonly) CGPoint extMedial;
@property (nonatomic, readonly) CGSize extHalfSize;

@property (nonatomic, readonly) QuickFrame *extQuickFrame;

@property (nonatomic, readonly) NSString *extBoundsString;
@property (nonatomic, readonly) NSString *extFrameString;

- (void)extRemoveAllSubviews;
@end

@interface EasyLayout : NSObject

+ (void)topCenterView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)bottomCenterView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;

+ (void)centerView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)rightCenterView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)leftCenterView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)bottomRightView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)bottomLeftView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;
+ (void)topRightView:(UIView *)targetView inParentView:(UIView *)parentView offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView toLeftOfView:(UIView *)siblingView offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView toRightAndVerticalCenterOfView:(UIView *)siblingView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView toRightOfView:(UIView *)siblingView offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView atView:(UIView *)siblingView offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView belowView:(UIView *)siblingView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView belowViews:(NSArray *)siblingViews offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView belowView:(UIView *)siblingView horizontallyCenterWithView:(UIView *)centerInView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView belowView:(UIView *)siblingView horizontallyCenterInParent:(UIView *)centerInParent offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView aboveView:(UIView *)siblingView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView aboveView:(UIView *)siblingView horizontallyCenterWithView:(UIView *)centerInView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView aboveView:(UIView *)siblingView horizontallyCenterInParent:(UIView *)centerInParent offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView verticalCenterOfView:(UIView *)siblingVIew offset:(CGSize)offset;

+ (void)positionView:(UIView *)targetView centerOfView:(UIView *)siblingView offset:(CGSize)offset;

+ (void)modifyHeight:(UIView *)targetView toBottomOfView:(UIView *)siblingView offset:(CGFloat)offset;
+ (void)modifyHeight:(UIView *)targetView toTopOfView:(UIView *)siblingView offset:(CGFloat)offset;

+ (void)modifyHeight:(UIView *)targetView toBottomOfParent:(UIView *)parentView offset:(CGFloat)offset;
+ (void)modifyWidth:(UIView *)targetView toRightOfParent:(UIView *)parentView offset:(CGFloat)offset;

+ (void)positionView:(UIView *)targetView inbetweenHorizontallyFirstView:(UIView *)firstView secondView:(UIView *)secondView offset:(CGSize)offset;
+ (void)positionView:(UIView *)targetView inbetweenVerticallyFirstView:(UIView *)firstView secondView:(UIView *)secondView offset:(CGSize)offset;


+ (void)sizeButton:(UIButton *)button matchHeightOfView:(UIView *)view;
@end

@interface EasyLayout(Inspection)
+ (UIView *)lowestViewFromArray:(NSArray *)arrayOfViews ignoreZeroHeight:(BOOL)ignoreZeroHeight;
@end

typedef enum
{
    ELLineModeSingle = 0,
    ELLineModeMulti,
} ELLineMode;

@interface EasyLayout(Label)
+ (void)sizeLabel:(UILabel *)label mode:(ELLineMode)lineMode maxWidth:(CGFloat)maxWidth;
@end