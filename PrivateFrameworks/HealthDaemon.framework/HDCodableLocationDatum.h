/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableLocationDatum : PBCodable <NSCopying> {
    double  _altitude;
    double  _course;
    struct { 
        unsigned int altitude : 1; 
        unsigned int course : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int speed : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
    }  _has;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    double  _speed;
    double  _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) double timestamp;
@property (nonatomic) double verticalAccuracy;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAltitude;
- (BOOL)hasCourse;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)hasLatitude;
- (BOOL)hasLongitude;
- (BOOL)hasSpeed;
- (BOOL)hasTimestamp;
- (BOOL)hasVerticalAccuracy;
- (unsigned int)hash;
- (double)horizontalAccuracy;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setHasAltitude:(BOOL)arg1;
- (void)setHasCourse:(BOOL)arg1;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setHasLatitude:(BOOL)arg1;
- (void)setHasLongitude:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)timestamp;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
