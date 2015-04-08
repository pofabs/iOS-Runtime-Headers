/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSString;

@interface MPUKeyValueObserver : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _observationHandler;

    NSString *_observedKeyPath;
    id _observedObject;
    NSOperationQueue *_queue;
}

@property(copy) id observationHandler;
@property(copy) NSString * observedKeyPath;
@property(retain) id observedObject;
@property(retain) NSOperationQueue * queue;

+ (id)observerForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id)arg4;
- (id)observationHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPath;
- (id)observedObject;
- (id)queue;
- (void)setObservationHandler:(id)arg1;
- (void)setObservedKeyPath:(id)arg1;
- (void)setObservedObject:(id)arg1;
- (void)setQueue:(id)arg1;

@end