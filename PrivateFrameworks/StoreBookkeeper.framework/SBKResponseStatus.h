/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSError, NSString;

@interface SBKResponseStatus : NSObject {
    NSString *_consoleDescription;
    BOOL _isError;
    BOOL _isPuntedError;
    BOOL _isRecoverable;
    BOOL _shouldFileRadar;
    int _statusCode;
}

@property(copy,readonly) NSString * consoleDescription;
@property(readonly) BOOL isAuthenticationError;
@property(readonly) BOOL isError;
@property(readonly) BOOL isGenericError;
@property(readonly) BOOL isPuntedError;
@property(readonly) BOOL isRecoverable;
@property(readonly) BOOL isSuccess;
@property(readonly) BOOL isUnsupportedClient;
@property(readonly) BOOL isValidationError;
@property(readonly) NSError * requestError;
@property(readonly) BOOL shouldFileRadar;
@property(readonly) int statusCode;

+ (id)responseStatusForStatusCodeNumber:(id)arg1;

- (void).cxx_destruct;
- (id)consoleDescription;
- (id)initWithStatus:(int)arg1 isRecoverable:(BOOL)arg2 isError:(BOOL)arg3 consoleDescription:(id)arg4 shouldFileRadar:(BOOL)arg5;
- (BOOL)isAuthenticationError;
- (BOOL)isError;
- (BOOL)isGenericError;
- (BOOL)isPuntedError;
- (BOOL)isRecoverable;
- (BOOL)isSuccess;
- (BOOL)isUnsupportedClient;
- (BOOL)isValidationError;
- (id)requestError;
- (BOOL)shouldFileRadar;
- (int)statusCode;

@end
