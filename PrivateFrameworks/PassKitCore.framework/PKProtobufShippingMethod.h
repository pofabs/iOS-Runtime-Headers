/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {
    long long  _amount;
    NSString * _detail;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _label;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic, readonly) BOOL hasDetail;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (BOOL)hasAmount;
- (BOOL)hasDetail;
- (BOOL)hasIdentifier;
- (BOOL)hasLabel;
- (BOOL)hasType;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasAmount:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
