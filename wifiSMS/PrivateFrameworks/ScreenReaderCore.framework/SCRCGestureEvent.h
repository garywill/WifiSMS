/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCGestureFinger;



@interface SCRCGestureEvent : NSObject 
{
    NSUInteger _deviceIdentifier;
    SCRCGestureFinger *_finger[5];
    NSUInteger _fingerCount;
    double _time;
    struct CGPoint { 
        float x; 
        float y; 
    } _averageLocation;
}


- (id)initWithDeviceIdentifier:(NSUInteger)arg1;
- (void)dealloc;
- (id)description;
- (NSUInteger)deviceIdentifier;
- (double)time;
- (void)addFingerWithIdentifier:(NSUInteger)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (void)removeFingerWithIdentifier:(NSUInteger)arg1;
- (NSUInteger)fingerCount;
- (id)fingerAtIndex:(NSUInteger)arg1;
- (id)fingerWithIdentifier:(NSUInteger)arg1;
- (id)fingerWithoutIdentifier:(NSUInteger)arg1;
- (id)fingers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fingerFrame;
- (struct CGPoint { float x1; float x2; })averageLocation;
- (struct CGPoint { float x1; float x2; })balancedLocation;
- (struct CGPoint { float x1; float x2; })magneticLocation;

@end
