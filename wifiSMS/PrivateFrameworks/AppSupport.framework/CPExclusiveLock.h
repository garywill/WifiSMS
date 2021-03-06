/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;



@interface CPExclusiveLock : NSObject <NSLocking>
{
    NSInteger _fd;
    NSString *_name;
}


- (id)init;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (void)setName:(id)arg1;
- (id)name;

@end
