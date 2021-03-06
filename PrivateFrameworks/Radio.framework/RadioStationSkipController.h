/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, RadioStation;

@interface RadioStationSkipController : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_source> *_availableSkipsInvalidationTimer;
    BOOL _hasValidSkipInvalidationDate;
    unsigned int _monitoringCount;
    int _numberOfAvailableSkips;
    NSDate *_skipInvalidationDate;
    unsigned int _skipsEnabled : 2;
    RadioStation *_station;
}

@property(readonly) int numberOfAvailableSkips;
@property(getter=hasSkipsEnabled,readonly) BOOL skipsEnabled;
@property(readonly) RadioStation * station;

- (void).cxx_destruct;
- (void)_cancelAvailableSkipsInvalidationTimer;
- (void)_createAvailableSkipsInvalidationTimer;
- (void)_modelDidChangeNotification:(id)arg1;
- (void)_rebuildState;
- (void)_updateForInvalidatedModel;
- (void)beginMonitoring;
- (void)dealloc;
- (void)endMonitoring;
- (BOOL)hasSkipsEnabled;
- (id)initWithStation:(id)arg1;
- (BOOL)isMonitoring;
- (int)numberOfAvailableSkips;
- (id)station;

@end
