/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewServiceSessionEndpoint;

@interface _UIViewServiceInterface_XPCObjects : _UIViewServiceInterface {
    _UIViewServiceSessionEndpoint *_serviceSessionEndpoint;
}

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(id)arg3;

- (id)_initWithConnectionInfo:(struct { id x1; id x2; id x3; })arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (id)connectToDeputyOfType:(id)arg1 connectionHandler:(id)arg2;
- (void)dealloc;

@end