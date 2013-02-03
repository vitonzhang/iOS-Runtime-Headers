/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
    IMServiceImpl *_service;
}

@property(retain) IMServiceImpl * service;

- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (id)accountNameForSpecifier:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)initWithServiceType:(int)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end