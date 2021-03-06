/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMMapPoint : PBCodable 
{
    NSInteger _latitude;
    NSInteger _longitude;
}

@property NSInteger longitude; /* unknown property attribute: V_longitude */
@property NSInteger latitude; /* unknown property attribute: V_latitude */

+ (id)mapPointWithCoordinate:(struct { double x1; double x2; })arg1;

- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (NSInteger)longitude;
- (void)setLongitude:(NSInteger)arg1;
- (NSInteger)latitude;
- (void)setLatitude:(NSInteger)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithOldMapPoint:(struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end
