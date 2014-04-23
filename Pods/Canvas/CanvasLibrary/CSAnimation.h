/*
 * This file is part of the Canvas package.
 * (c) Canvas <usecanvas@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

//动画类型
typedef NSString *CSAnimationType;

static CSAnimationType CSAnimationTypeBounceLeft   = @"bounceLeft";
static CSAnimationType CSAnimationTypeBounceRight  = @"bounceRight";
static CSAnimationType CSAnimationTypeBounceDown   = @"bounceDown";
static CSAnimationType CSAnimationTypeBounceUp     = @"bounceUp";
static CSAnimationType CSAnimationTypeFadeIn       = @"fadeIn";
static CSAnimationType CSAnimationTypeFadeOut      = @"fadeOut";
static CSAnimationType CSAnimationTypeFadeInLeft   = @"fadeInLeft";
static CSAnimationType CSAnimationTypeFadeInRight  = @"fadeInRight";
static CSAnimationType CSAnimationTypeFadeInDown   = @"fadeInDown";
static CSAnimationType CSAnimationTypeFadeInUp     = @"fadeInUp";
static CSAnimationType CSAnimationTypeSlideLeft    = @"slideLeft";
static CSAnimationType CSAnimationTypeSlideRight   = @"slideRight";
static CSAnimationType CSAnimationTypeSlideDown    = @"slideDown";
static CSAnimationType CSAnimationTypeSlideUp      = @"slideUp";
static CSAnimationType CSAnimationTypePop          = @"pop";
static CSAnimationType CSAnimationTypeMorph        = @"morph";
static CSAnimationType CSAnimationTypeFlash        = @"flash";
static CSAnimationType CSAnimationTypeShake        = @"shake";
static CSAnimationType CSAnimationTypeZoomIn       = @"zoomIn";
static CSAnimationType CSAnimationTypeZoomOut      = @"zoomOut";

extern NSString *const CSAnimationExceptionMethodNotImplemented;

@protocol CSAnimation <NSObject>

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic) NSTimeInterval delay;

/**
 *  在view上执行动画
 *
 *  @param view     要执行动画的view
 *  @param duration 动画持续的时间
 *  @param delay    动画延迟时间
 */
+ (void)performAnimationOnView:(UIView *)view duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay;

@end


@interface CSAnimation : NSObject <CSAnimation>

/**
 *  注册动画
 *
 *  @param class         在当前类注册动画
 *  @param animationType 动画类型
 */
+ (void)registerClass:(Class)class forAnimationType:(CSAnimationType)animationType;

/**
 *  给指定类添加动画类型
 *
 *  @param animationType 动画类型
 *
 *  @return 添加动画的类
 */
+ (Class)classForAnimationType:(CSAnimationType)animationType;

@end
