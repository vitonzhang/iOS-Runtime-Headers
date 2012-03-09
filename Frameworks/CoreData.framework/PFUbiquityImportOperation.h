/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject, NSLock;

@interface PFUbiquityImportOperation : NSOperation  {
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property NSObject * delegate;


- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)lockDelegateLock;
- (void)unlockDelegateLock;

@end