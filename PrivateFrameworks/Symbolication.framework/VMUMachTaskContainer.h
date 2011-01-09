/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUMachTaskContainer : NSObject 
{
    NSInteger _pid;
    NSUInteger _task;
}

+ (id)machTaskContainerWithTask:(NSUInteger)arg1;
+ (id)machTaskContainerWithPid:(NSInteger)arg1;
+ (id)machTaskContainerWithPid:(NSInteger)arg1 task:(NSUInteger)arg2;
+ (id)machTaskContainer;

- (id)initWithPid:(NSInteger)arg1 task:(NSUInteger)arg2;
- (NSUInteger)task;
- (void)finalize;
- (id)description;
- (void)dealloc;
- (NSInteger)pid;

@end