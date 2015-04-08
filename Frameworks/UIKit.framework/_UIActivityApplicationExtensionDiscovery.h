/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id _extensionMatchingContext;
    NSArray *_extensionPointIdentifiers;
    BOOL _matchesOnlyUserElectedExtensions;
    BOOL _performsInitialMatching;
    BOOL _sourceIsManaged;
}

@property(retain) id extensionMatchingContext;
@property(copy) NSArray * extensionPointIdentifiers;
@property BOOL matchesOnlyUserElectedExtensions;
@property BOOL performsInitialMatching;
@property BOOL sourceIsManaged;

- (id)activitiesMatchingInputItems:(id)arg1 error:(id*)arg2 updateBlock:(id)arg3;
- (void)cancelUpdatesIfNeeded;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (BOOL)matchesOnlyUserElectedExtensions;
- (BOOL)performsInitialMatching;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setMatchesOnlyUserElectedExtensions:(BOOL)arg1;
- (void)setPerformsInitialMatching:(BOOL)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (BOOL)sourceIsManaged;

@end