/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMutableSettings;

@interface FBSSceneClientSettingsDiffInspector : NSObject {
    BOOL _iteratingObservers;
    BSMutableSettings *_observerInfo;
}

- (void)_addObserver:(id)arg1 forSetting:(unsigned int)arg2 inInfo:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)inspectDiff:(id)arg1 withContext:(void*)arg2;
- (void)observeClassWithBlock:(id)arg1;
- (void)observeOcclusionsWithBlock:(id)arg1;
- (void)observeOtherSetting:(unsigned int)arg1 withBlock:(id)arg2;
- (void)observePreferredInterfaceOrientationWithBlock:(id)arg1;
- (void)observePreferredLevelWithBlock:(id)arg1;
- (void)removeAllObservers;

@end
