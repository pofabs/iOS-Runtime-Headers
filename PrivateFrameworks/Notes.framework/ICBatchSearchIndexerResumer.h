/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICBatchSearchIndexerResumer : NSObject {
    BOOL _cancelled;
    ICBatchSearchIndexer *_searchIndexer;
    NSArray *_searchIndexes;
}

@property (nonatomic) BOOL cancelled;
@property (nonatomic) ICBatchSearchIndexer *searchIndexer;
@property (nonatomic, copy) NSArray *searchIndexes;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)cancelled;
- (id)initWithSearchIndexer:(id)arg1;
- (void)resume;
- (id)searchIndexer;
- (id)searchIndexes;
- (void)setCancelled:(BOOL)arg1;
- (void)setSearchIndexer:(id)arg1;
- (void)setSearchIndexes:(id)arg1;

@end