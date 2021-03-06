/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, <DAMFStreamingContentConsumer>, NSData;



@interface DAMessageBodyFetchConsumer : NSObject <RequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>
{
    <DAMFStreamingContentConsumer> *_streamConsumer;
    BOOL _succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain) NSData *data; /* unknown property attribute: V_data */
@property(readonly) BOOL succeeded; /* unknown property attribute: V_succeeded */
@property(retain) MFError *error; /* unknown property attribute: V_error */
@property(retain) <DAMFStreamingContentConsumer> *streamConsumer; /* unknown property attribute: V_streamConsumer */


- (BOOL)wantsData;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (BOOL)succeeded;
- (id)data;
- (id)streamingContentConsumer;
- (void)dealloc;
- (void)setData:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;

@end
