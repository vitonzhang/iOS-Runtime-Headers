/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying> {
    NSMutableArray *_addedMessages;
    NSString *_conversationId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
}

@property(retain) NSMutableArray * addedMessages;
@property(retain) NSString * conversationId;
@property(retain) NSData * dateSynced;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasConversationId;
@property(readonly) BOOL hasDateSynced;
@property BOOL hasFullSyncVersion;

- (void).cxx_destruct;
- (void)addAddedMessage:(id)arg1;
- (id)addedMessageAtIndex:(unsigned int)arg1;
- (id)addedMessages;
- (unsigned int)addedMessagesCount;
- (void)clearAddedMessages;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasConversationId;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddedMessages:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
