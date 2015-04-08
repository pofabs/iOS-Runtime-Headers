/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, GEOComposedRouteStep, GEOStep;

@interface GEOComposedRouteStep : NSObject {
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _maneuverPointRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _pointRange;
    int _routeLegType;
    unsigned int _stepIndex;
}

@property GEOComposedRoute * composedRoute;
@property(readonly) unsigned int distance;
@property(readonly) unsigned int duration;
@property(readonly) struct { double x1; double x2; } endGeoCoordinate;
@property(readonly) unsigned int endPointIndex;
@property(readonly) GEOStep * geoStep;
@property(readonly) BOOL hasDuration;
@property(readonly) BOOL isUncertainArrival;
@property(readonly) unsigned int maneuverEndPointIndex;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } maneuverPointRange;
@property(readonly) unsigned int maneuverStartPointIndex;
@property(getter=getNextStep,readonly) GEOComposedRouteStep * nextStep;
@property(readonly) unsigned int pointCount;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } pointRange;
@property(getter=getPreviousStep,readonly) GEOComposedRouteStep * previousStep;
@property(readonly) int routeLegType;
@property(readonly) struct { double x1; double x2; } startGeoCoordinate;
@property(readonly) unsigned int startPointIndex;
@property(readonly) unsigned int stepIndex;
@property(readonly) int transportType;

- (id)composedRoute;
- (void)dealloc;
- (id)description;
- (unsigned int)distance;
- (unsigned int)duration;
- (struct { double x1; double x2; })endGeoCoordinate;
- (unsigned int)endPointIndex;
- (id)firstNameOrBranch;
- (id)geoStep;
- (id)getNextStep;
- (id)getPreviousStep;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(int)arg3 stepIndex:(unsigned int)arg4 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepIndex:(unsigned int)arg3 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)isUncertainArrival;
- (unsigned int)maneuverEndPointIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maneuverPointRange;
- (unsigned int)maneuverStartPointIndex;
- (unsigned int)pointCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pointRange;
- (int)routeLegType;
- (void)setComposedRoute:(id)arg1;
- (struct { double x1; double x2; })startGeoCoordinate;
- (unsigned int)startPointIndex;
- (unsigned int)stepIndex;
- (int)transportType;

@end