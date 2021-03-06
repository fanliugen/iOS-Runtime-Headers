/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate>, NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {
    NSSet *_setElements;
}

@property <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> * delegate;
@property(retain) NSSet * setElements;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (id)setElements;
- (void)setSetElements:(id)arg1;
- (void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2;

@end
