/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSSet;

@interface PHChangeRequestJob : PLDaemonJob {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSSet *_deletes;
    NSSet *_inserts;
    NSSet *_updates;
    NSObject<OS_xpc_object> *_xpcDeletes;
    NSObject<OS_xpc_object> *_xpcInserts;
    NSObject<OS_xpc_object> *_xpcUpdates;
}

@property(copy) id completionHandler;
@property(copy) NSSet * deletes;
@property(copy) NSSet * inserts;
@property(copy) NSSet * updates;
@property(retain) NSObject<OS_xpc_object> * xpcDeletes;
@property(retain) NSObject<OS_xpc_object> * xpcInserts;
@property(retain) NSObject<OS_xpc_object> * xpcUpdates;

+ (void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char *)arg3;
+ (void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(id)arg4;

- (void).cxx_destruct;
- (id)completionHandler;
- (long long)daemonOperation;
- (id)deletes;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)inserts;
- (void)run;
- (void)runDaemonSide;
- (void)setCompletionHandler:(id)arg1;
- (void)setDeletes:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setUpdates:(id)arg1;
- (void)setXpcDeletes:(id)arg1;
- (void)setXpcInserts:(id)arg1;
- (void)setXpcUpdates:(id)arg1;
- (id)updates;
- (id)xpcDeletes;
- (id)xpcInserts;
- (id)xpcUpdates;

@end
