/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDModifySharesURLRequest : CKDURLRequest {
    NSMutableDictionary *_participantIDByRequestID;
    NSMutableDictionary *_shareIDByRequestID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareModifiedBlock;

    NSArray *_sharesToDelete;
    NSMutableDictionary *_sharesToSaveByID;
}

@property(retain) NSMutableDictionary * participantIDByRequestID;
@property(retain) NSMutableDictionary * shareIDByRequestID;
@property(copy) id shareModifiedBlock;
@property(retain) NSArray * sharesToDelete;
@property(retain) NSMutableDictionary * sharesToSaveByID;

- (void).cxx_destruct;
- (id)initWithSharesToSave:(id)arg1 sharesToDelete:(id)arg2;
- (int)operationType;
- (id)participantIDByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setParticipantIDByRequestID:(id)arg1;
- (void)setShareIDByRequestID:(id)arg1;
- (void)setShareModifiedBlock:(id)arg1;
- (void)setSharesToDelete:(id)arg1;
- (void)setSharesToSaveByID:(id)arg1;
- (id)shareIDByRequestID;
- (id)shareModifiedBlock;
- (id)sharesToDelete;
- (id)sharesToSaveByID;

@end