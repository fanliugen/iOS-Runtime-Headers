/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStyle, EDNumberValue;



@interface EMCellNumberMapper : CMMapper 
{
    EDNumberValue *edValue;
    EDStyle *edStyle;
}


- (id)initWithEDNumberValue:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (id)formatValueAsNumber;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end