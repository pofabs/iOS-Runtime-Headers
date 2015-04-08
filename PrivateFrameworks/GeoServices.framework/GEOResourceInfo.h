/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, NSString;

@interface GEOResourceInfo : NSObject {
    BOOL _allowResumingPartialDownload;
    NSString *_checksum;
    NSArray *_equivalentResources;
    NSString *_name;
    int _type;
}

@property(getter=_allowResumingPartialDownload,setter=_setAllowResumingPartialDownload:) BOOL allowResumingPartialDownload;
@property(readonly) NSString * checksum;
@property(copy) NSArray * equivalentResources;
@property(readonly) NSString * name;
@property(readonly) int type;

- (BOOL)_allowResumingPartialDownload;
- (void)_setAllowResumingPartialDownload:(BOOL)arg1;
- (id)checksum;
- (void)dealloc;
- (id)description;
- (id)equivalentResources;
- (id)initWithName:(id)arg1 type:(int)arg2 checksum:(id)arg3;
- (id)name;
- (void)setEquivalentResources:(id)arg1;
- (int)type;

@end