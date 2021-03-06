/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadLabelPickingResult : NSObject {
    VKLabelFeatureMarker * _labelFeatureMarker;
}

@property (nonatomic, readonly) float closestApproach;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } direction;
@property (nonatomic, readonly) VKLabelFeatureMarker *labelFeatureMarker;
@property (nonatomic, readonly) NSString *name;

- (float)closestApproach;
- (void)dealloc;
- (id)description;
- (struct CGVector { double x1; double x2; })direction;
- (id)initWithLabelFeatureMarkerPtr:(const struct shared_ptr<md::LabelFeatureMarker> { }*)arg1;
- (id)labelFeatureMarker;
- (id)name;

@end
