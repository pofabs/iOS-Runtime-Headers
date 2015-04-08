/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {
    NSNumber *_batteryLife;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    BOOL _hasDuplicates;
    unsigned char _networkType;
    NSNumber *_signalStrength;
}

@property(retain) NSNumber * batteryLife;
@property(copy) NSString * deviceIdentifier;
@property(copy) NSString * deviceName;
@property BOOL hasDuplicates;
@property unsigned char networkType;
@property(retain) NSNumber * signalStrength;

+ (BOOL)supportsSecureCoding;

- (id)batteryLife;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDuplicates;
- (id)initWithCoder:(id)arg1;
- (unsigned char)networkType;
- (void)setBatteryLife:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasDuplicates:(BOOL)arg1;
- (void)setNetworkType:(unsigned char)arg1;
- (void)setSignalStrength:(id)arg1;
- (id)signalStrength;

@end