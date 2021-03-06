/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    BOOL _complete;
    NSData *_data;
    NSString *_partName;
    BOOL _partial;
}

@property(getter=isComplete) BOOL complete;
@property(retain) NSData * data;
@property(retain) NSString * partName;
@property(getter=isPartial) BOOL partial;

- (id)data;
- (void)dealloc;
- (BOOL)isComplete;
- (BOOL)isPartial;
- (id)partName;
- (void)setComplete:(BOOL)arg1;
- (void)setData:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setPartial:(BOOL)arg1;

@end
