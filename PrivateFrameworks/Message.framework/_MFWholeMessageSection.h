/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSData;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {
    NSData *_data;
}

@property(retain) NSData * data;

- (id)data;
- (void)dealloc;
- (bool)isComplete;
- (bool)isPartial;
- (id)partName;
- (void)setData:(id)arg1;

@end