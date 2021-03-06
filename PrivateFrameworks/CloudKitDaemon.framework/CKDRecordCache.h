/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, NSObject<OS_dispatch_queue>;

@interface CKDRecordCache : CKSQLite {
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_queue;
    int _scope;
}

@property(retain) CKDClientContext * context;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property int scope;

- (void).cxx_destruct;
- (BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;
- (id)context;
- (void)deleteRecordWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (void)expireRecordsWithExpiryDate:(id)arg1;
- (id)initWithPath:(id)arg1 queue:(id)arg2;
- (id)queue;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (int)scope;
- (void)setContext:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScope:(int)arg1;

@end
