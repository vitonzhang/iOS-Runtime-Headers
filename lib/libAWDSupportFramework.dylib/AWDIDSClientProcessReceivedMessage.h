/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {
    unsigned long long _deltaTime;
    struct { 
        unsigned int deltaTime : 1; 
        unsigned int payloadSize : 1; 
        unsigned int priority : 1; 
        unsigned int qos : 1; 
        unsigned int threadPriority : 1; 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _payloadSize;
    unsigned long long _priority;
    unsigned long long _qos;
    NSString *_service;
    unsigned long long _threadPriority;
    unsigned long long _timestamp;
}

@property unsigned long long deltaTime;
@property BOOL hasDeltaTime;
@property BOOL hasPayloadSize;
@property BOOL hasPriority;
@property BOOL hasQos;
@property(readonly) BOOL hasService;
@property BOOL hasThreadPriority;
@property BOOL hasTimestamp;
@property unsigned long long payloadSize;
@property unsigned long long priority;
@property unsigned long long qos;
@property(retain) NSString * service;
@property unsigned long long threadPriority;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deltaTime;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDeltaTime;
- (BOOL)hasPayloadSize;
- (BOOL)hasPriority;
- (BOOL)hasQos;
- (BOOL)hasService;
- (BOOL)hasThreadPriority;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)payloadSize;
- (unsigned long long)priority;
- (unsigned long long)qos;
- (BOOL)readFrom:(id)arg1;
- (id)service;
- (void)setDeltaTime:(unsigned long long)arg1;
- (void)setHasDeltaTime:(BOOL)arg1;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setHasPriority:(BOOL)arg1;
- (void)setHasQos:(BOOL)arg1;
- (void)setHasThreadPriority:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setQos:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setThreadPriority:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)threadPriority;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
