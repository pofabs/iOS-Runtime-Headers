/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPTextSource>, NSString, TSWPRangeMap;

@interface TSWPRubyTextSource : NSObject <TSWPTextSource> {
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__first_; 
        } __end_cap_; 
    } _bidiCharIndexes;
    struct vector<bool, std::__1::allocator<bool> > { 
        unsigned long *__begin_; 
        unsigned int __size_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long __first_; 
        } __cap_alloc_; 
    } _bidiDirectionMarkIsRTLVector;
    unsigned int _length;
    TSWPRangeMap *_rangeMap;
    <TSWPTextSource> *_source;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__first_; 
        } __end_cap_; 
    } _spaceCharIndexes;
    unsigned int _storageLength;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adjustRangesByDelta:(int)arg1;
- (id)attachmentAtCharIndex:(unsigned int)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned int)arg1;
- (void)attributesAtCharIndex:(unsigned int)arg1 attributesOfInterest:(BOOL[19])arg2 attributesTable:(id[19])arg3 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg1;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg1;
- (unsigned int)charIndexRemappedFromStorage:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedToStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)characterStyleAtCharIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (unsigned long)composedCharacterAtCharIndex:(unsigned int)arg1 isSurrogatePair:(BOOL*)arg2;
- (void)dealloc;
- (id)footnoteReferenceAtCharIndex:(unsigned int)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned int)arg1;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned int)arg1;
- (long)hyphenationLocationBeforeIndex:(long)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 locale:(struct __CFLocale { }*)arg3 hyphenChar:(unsigned int*)arg4;
- (id)initWithSource:(id)arg1 subRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned int)arg1;
- (unsigned int)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned int)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)smartFieldAtCharIndex:(unsigned int)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)storageLength;
- (id)string;
- (struct _NSRange { unsigned int x1; unsigned int x2; })wordAtCharIndex:(unsigned int)arg1 includePreviousWord:(BOOL)arg2;

@end