/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPWindowTrackingView : UIView {
    id _observer;
}

+ (void)beginTrackingInView:(id)arg1 withObserver:(id)arg2;
+ (void)endTrackingInView:(id)arg1;

- (void)clearObserver;
- (void)didMoveToWindow;
- (id)initWithObserver:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end