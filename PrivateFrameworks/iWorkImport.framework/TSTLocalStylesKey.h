/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTLocalStylesKey : NSObject <NSCopying> {
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
}

@property(retain) TSTCellStyle * cellStyle;
@property(retain) TSWPParagraphStyle * textStyle;

- (id)cellStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end