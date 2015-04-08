/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, CKDPLocale, NSData, NSString;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {
    NSString *_applicationBundle;
    unsigned long long _applicationConfigVersion;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    unsigned long long _deviceProtocolVersion;
    NSString *_deviceSoftwareVersion;
    unsigned long long _globalConfigVersion;
    struct { 
        unsigned int applicationConfigVersion : 1; 
        unsigned int deviceFlowControlBudget : 1; 
        unsigned int deviceFlowControlBudgetCap : 1; 
        unsigned int deviceProtocolVersion : 1; 
        unsigned int globalConfigVersion : 1; 
        unsigned int applicationContainerEnvironment : 1; 
        unsigned int deviceFlowControlRegeneration : 1; 
        unsigned int isolationLevel : 1; 
        unsigned int targetDatabase : 1; 
    } _has;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
}

@property(retain) NSString * applicationBundle;
@property unsigned long long applicationConfigVersion;
@property(retain) NSString * applicationContainer;
@property int applicationContainerEnvironment;
@property(retain) NSString * applicationVersion;
@property(retain) NSData * clientChangeToken;
@property(retain) NSString * deviceAssignedName;
@property unsigned long long deviceFlowControlBudget;
@property unsigned long long deviceFlowControlBudgetCap;
@property(retain) NSString * deviceFlowControlKey;
@property float deviceFlowControlRegeneration;
@property(retain) NSString * deviceHardwareID;
@property(retain) NSString * deviceHardwareVersion;
@property(retain) CKDPIdentifier * deviceIdentifier;
@property(retain) NSString * deviceLibraryName;
@property(retain) NSString * deviceLibraryVersion;
@property unsigned long long deviceProtocolVersion;
@property(retain) NSString * deviceSoftwareVersion;
@property unsigned long long globalConfigVersion;
@property(readonly) BOOL hasApplicationBundle;
@property BOOL hasApplicationConfigVersion;
@property(readonly) BOOL hasApplicationContainer;
@property BOOL hasApplicationContainerEnvironment;
@property(readonly) BOOL hasApplicationVersion;
@property(readonly) BOOL hasClientChangeToken;
@property(readonly) BOOL hasDeviceAssignedName;
@property BOOL hasDeviceFlowControlBudget;
@property BOOL hasDeviceFlowControlBudgetCap;
@property(readonly) BOOL hasDeviceFlowControlKey;
@property BOOL hasDeviceFlowControlRegeneration;
@property(readonly) BOOL hasDeviceHardwareID;
@property(readonly) BOOL hasDeviceHardwareVersion;
@property(readonly) BOOL hasDeviceIdentifier;
@property(readonly) BOOL hasDeviceLibraryName;
@property(readonly) BOOL hasDeviceLibraryVersion;
@property BOOL hasDeviceProtocolVersion;
@property(readonly) BOOL hasDeviceSoftwareVersion;
@property BOOL hasGlobalConfigVersion;
@property BOOL hasIsolationLevel;
@property(readonly) BOOL hasLocale;
@property(readonly) BOOL hasMmcsProtocolVersion;
@property BOOL hasTargetDatabase;
@property(readonly) BOOL hasUserIDContainerID;
@property(readonly) BOOL hasUserToken;
@property int isolationLevel;
@property(retain) CKDPLocale * locale;
@property(retain) NSString * mmcsProtocolVersion;
@property int targetDatabase;
@property(retain) NSString * userIDContainerID;
@property(retain) NSString * userToken;

- (void).cxx_destruct;
- (id)_prettyDictionaryRepresentation;
- (id)applicationBundle;
- (unsigned long long)applicationConfigVersion;
- (id)applicationContainer;
- (int)applicationContainerEnvironment;
- (id)applicationVersion;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceAssignedName;
- (unsigned long long)deviceFlowControlBudget;
- (unsigned long long)deviceFlowControlBudgetCap;
- (id)deviceFlowControlKey;
- (float)deviceFlowControlRegeneration;
- (id)deviceHardwareID;
- (id)deviceHardwareVersion;
- (id)deviceIdentifier;
- (id)deviceLibraryName;
- (id)deviceLibraryVersion;
- (unsigned long long)deviceProtocolVersion;
- (id)deviceSoftwareVersion;
- (id)dictionaryRepresentation;
- (unsigned long long)globalConfigVersion;
- (BOOL)hasApplicationBundle;
- (BOOL)hasApplicationConfigVersion;
- (BOOL)hasApplicationContainer;
- (BOOL)hasApplicationContainerEnvironment;
- (BOOL)hasApplicationVersion;
- (BOOL)hasClientChangeToken;
- (BOOL)hasDeviceAssignedName;
- (BOOL)hasDeviceFlowControlBudget;
- (BOOL)hasDeviceFlowControlBudgetCap;
- (BOOL)hasDeviceFlowControlKey;
- (BOOL)hasDeviceFlowControlRegeneration;
- (BOOL)hasDeviceHardwareID;
- (BOOL)hasDeviceHardwareVersion;
- (BOOL)hasDeviceIdentifier;
- (BOOL)hasDeviceLibraryName;
- (BOOL)hasDeviceLibraryVersion;
- (BOOL)hasDeviceProtocolVersion;
- (BOOL)hasDeviceSoftwareVersion;
- (BOOL)hasGlobalConfigVersion;
- (BOOL)hasIsolationLevel;
- (BOOL)hasLocale;
- (BOOL)hasMmcsProtocolVersion;
- (BOOL)hasTargetDatabase;
- (BOOL)hasUserIDContainerID;
- (BOOL)hasUserToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)isolationLevel;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)mmcsProtocolVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationBundle:(id)arg1;
- (void)setApplicationConfigVersion:(unsigned long long)arg1;
- (void)setApplicationContainer:(id)arg1;
- (void)setApplicationContainerEnvironment:(int)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setDeviceAssignedName:(id)arg1;
- (void)setDeviceFlowControlBudget:(unsigned long long)arg1;
- (void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1;
- (void)setDeviceFlowControlKey:(id)arg1;
- (void)setDeviceFlowControlRegeneration:(float)arg1;
- (void)setDeviceHardwareID:(id)arg1;
- (void)setDeviceHardwareVersion:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceLibraryName:(id)arg1;
- (void)setDeviceLibraryVersion:(id)arg1;
- (void)setDeviceProtocolVersion:(unsigned long long)arg1;
- (void)setDeviceSoftwareVersion:(id)arg1;
- (void)setGlobalConfigVersion:(unsigned long long)arg1;
- (void)setHasApplicationConfigVersion:(BOOL)arg1;
- (void)setHasApplicationContainerEnvironment:(BOOL)arg1;
- (void)setHasDeviceFlowControlBudget:(BOOL)arg1;
- (void)setHasDeviceFlowControlBudgetCap:(BOOL)arg1;
- (void)setHasDeviceFlowControlRegeneration:(BOOL)arg1;
- (void)setHasDeviceProtocolVersion:(BOOL)arg1;
- (void)setHasGlobalConfigVersion:(BOOL)arg1;
- (void)setHasIsolationLevel:(BOOL)arg1;
- (void)setHasTargetDatabase:(BOOL)arg1;
- (void)setIsolationLevel:(int)arg1;
- (void)setLocale:(id)arg1;
- (void)setMmcsProtocolVersion:(id)arg1;
- (void)setTargetDatabase:(int)arg1;
- (void)setUserIDContainerID:(id)arg1;
- (void)setUserToken:(id)arg1;
- (int)targetDatabase;
- (id)userIDContainerID;
- (id)userToken;
- (void)writeTo:(id)arg1;

@end