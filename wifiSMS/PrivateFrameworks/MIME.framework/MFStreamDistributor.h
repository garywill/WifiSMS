/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableSet;



@interface MFStreamDistributor : NSObject <MFDataConsumer>
{
    NSMutableSet *_consumers;
}


- (id)init;
- (void)addConsumer:(id)arg1;
- (void)appendData:(id)arg1;
- (void)done;
- (void)dealloc;

@end
