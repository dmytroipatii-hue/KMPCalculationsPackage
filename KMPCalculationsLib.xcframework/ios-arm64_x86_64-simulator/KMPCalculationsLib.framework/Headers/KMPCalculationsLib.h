#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KMPCLAcquiredData, KMPCLCalculationModel, KMPCLCalculationMsgKeys, KMPCLCalculationResults, KMPCLCalculationResultsCompanion, KMPCLCalculationsManagerCompanion, KMPCLCsvConstants, KMPCLCsvConverter, KMPCLDetailedResults, KMPCLDetailedResultsCompanion, KMPCLExerciseType, KMPCLExerciseTypeCompanion, KMPCLForceResult, KMPCLGyrResult, KMPCLKotlinArray<T>, KMPCLKotlinEnum<E>, KMPCLKotlinEnumCompanion, KMPCLKotlinNothing, KMPCLKotlinx_serialization_coreSerialKind, KMPCLKotlinx_serialization_coreSerializersModule, KMPCLLiftData, KMPCLNumberFormatter, KMPCLParamsIds, KMPCLPhase, KMPCLPowerResult, KMPCLRotationResult, KMPCLSingleResult, KMPCLSingleResultCompanion, KMPCLUnitsModel, KMPCLUnitsModelCompanion, KMPCLVariantType, KMPCLVariantTypeCompanion;

@protocol KMPCLKotlinAnnotation, KMPCLKotlinComparable, KMPCLKotlinIterator, KMPCLKotlinKAnnotatedElement, KMPCLKotlinKClass, KMPCLKotlinKClassifier, KMPCLKotlinKDeclarationContainer, KMPCLKotlinx_serialization_coreCompositeDecoder, KMPCLKotlinx_serialization_coreCompositeEncoder, KMPCLKotlinx_serialization_coreDecoder, KMPCLKotlinx_serialization_coreDeserializationStrategy, KMPCLKotlinx_serialization_coreEncoder, KMPCLKotlinx_serialization_coreKSerializer, KMPCLKotlinx_serialization_coreSerialDescriptor, KMPCLKotlinx_serialization_coreSerializationStrategy, KMPCLKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KMPCLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KMPCLBase (KMPCLBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KMPCLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KMPCLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKMPCLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KMPCLNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KMPCLByte : KMPCLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KMPCLUByte : KMPCLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KMPCLShort : KMPCLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KMPCLUShort : KMPCLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KMPCLInt : KMPCLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KMPCLUInt : KMPCLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KMPCLLong : KMPCLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KMPCLULong : KMPCLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KMPCLFloat : KMPCLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KMPCLDouble : KMPCLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KMPCLBoolean : KMPCLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * _Ported from Swift with AI-assisted conversion on 13/05/2025 (iOS branch `dev`)._
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationsManager")))
@interface KMPCLCalculationsManager : KMPCLBase
- (instancetype)initWithCalculationType:(KMPCLExerciseType *)calculationType parameterLabelProvider:(KMPCLUnitsModel * _Nullable (^)(NSString *))parameterLabelProvider __attribute__((swift_name("init(calculationType:parameterLabelProvider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLCalculationsManagerCompanion *companion __attribute__((swift_name("companion")));
- (KMPCLCalculationResults * _Nullable)addRowData:(KMPCLAcquiredData * _Nullable)data isRunning:(BOOL)isRunning __attribute__((swift_name("addRow(data:isRunning:)")));
- (KMPCLCalculationResults * _Nullable)addRowRow:(NSString *)row isRunning:(BOOL)isRunning __attribute__((swift_name("addRow(row:isRunning:)"))) __attribute__((deprecated("Use version with AcquiredData parameter")));
- (KMPCLDetailedResults *)getAllValues __attribute__((swift_name("getAllValues()")));
- (KMPCLCalculationResults *)getAvg __attribute__((swift_name("getAvg()")));
- (void)restartExercise __attribute__((swift_name("restartExercise()")));
- (void)settingSetupAthleteMass:(double)athleteMass protocolExerciseLoad:(double)protocolExerciseLoad variantType:(KMPCLVariantType * _Nullable)variantType __attribute__((swift_name("settingSetup(athleteMass:protocolExerciseLoad:variantType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationsManager.Companion")))
@interface KMPCLCalculationsManagerCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLCalculationsManagerCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForceResult")))
@interface KMPCLForceResult : KMPCLBase
- (instancetype)initWithAvgAcc:(double)avgAcc maxAcc:(double)maxAcc avgForce:(double)avgForce maxForce:(double)maxForce __attribute__((swift_name("init(avgAcc:maxAcc:avgForce:maxForce:)"))) __attribute__((objc_designated_initializer));
- (KMPCLForceResult *)doCopyAvgAcc:(double)avgAcc maxAcc:(double)maxAcc avgForce:(double)avgForce maxForce:(double)maxForce __attribute__((swift_name("doCopy(avgAcc:maxAcc:avgForce:maxForce:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double avgAcc __attribute__((swift_name("avgAcc")));
@property (readonly) double avgForce __attribute__((swift_name("avgForce")));
@property (readonly) double maxAcc __attribute__((swift_name("maxAcc")));
@property (readonly) double maxForce __attribute__((swift_name("maxForce")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GyrResult")))
@interface KMPCLGyrResult : KMPCLBase
- (instancetype)initWithAvg:(double)avg std:(double)std __attribute__((swift_name("init(avg:std:)"))) __attribute__((objc_designated_initializer));
- (KMPCLGyrResult *)doCopyAvg:(double)avg std:(double)std __attribute__((swift_name("doCopy(avg:std:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double avg __attribute__((swift_name("avg")));
@property (readonly) double std __attribute__((swift_name("std")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LiftData")))
@interface KMPCLLiftData : KMPCLBase
- (instancetype)initWithPhases:(NSArray<KMPCLPhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (KMPCLLiftData *)doCopyPhases:(NSArray<KMPCLPhase *> *)phases __attribute__((swift_name("doCopy(phases:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<KMPCLPhase *> *phases __attribute__((swift_name("phases")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phase")))
@interface KMPCLPhase : KMPCLBase
- (instancetype)initWithStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex elementStart:(KMPCLAcquiredData *)elementStart elementEnd:(KMPCLAcquiredData *)elementEnd max:(double)max min:(double)min isConcentric:(BOOL)isConcentric data:(NSArray<KMPCLAcquiredData *> *)data calcModel:(KMPCLCalculationModel *)calcModel __attribute__((swift_name("init(startIndex:endIndex:elementStart:elementEnd:max:min:isConcentric:data:calcModel:)"))) __attribute__((objc_designated_initializer));
- (KMPCLPhase *)doCopyStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex elementStart:(KMPCLAcquiredData *)elementStart elementEnd:(KMPCLAcquiredData *)elementEnd max:(double)max min:(double)min isConcentric:(BOOL)isConcentric data:(NSArray<KMPCLAcquiredData *> *)data calcModel:(KMPCLCalculationModel *)calcModel __attribute__((swift_name("doCopy(startIndex:endIndex:elementStart:elementEnd:max:min:isConcentric:data:calcModel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (double)getDuration __attribute__((swift_name("getDuration()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KMPCLCalculationModel *calcModel __attribute__((swift_name("calcModel")));
@property (readonly) NSArray<KMPCLAcquiredData *> *data __attribute__((swift_name("data")));
@property (readonly) KMPCLAcquiredData *elementEnd __attribute__((swift_name("elementEnd")));
@property (readonly) KMPCLAcquiredData *elementStart __attribute__((swift_name("elementStart")));
@property (readonly) int32_t endIndex __attribute__((swift_name("endIndex")));
@property BOOL isConcentric __attribute__((swift_name("isConcentric")));
@property (readonly) double max __attribute__((swift_name("max")));
@property (readonly) double min __attribute__((swift_name("min")));
@property (readonly) int32_t startIndex __attribute__((swift_name("startIndex")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerResult")))
@interface KMPCLPowerResult : KMPCLBase
- (instancetype)initWithAvgPower:(double)avgPower maxPower:(double)maxPower __attribute__((swift_name("init(avgPower:maxPower:)"))) __attribute__((objc_designated_initializer));
- (KMPCLPowerResult *)doCopyAvgPower:(double)avgPower maxPower:(double)maxPower __attribute__((swift_name("doCopy(avgPower:maxPower:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double avgPower __attribute__((swift_name("avgPower")));
@property (readonly) double maxPower __attribute__((swift_name("maxPower")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationResult")))
@interface KMPCLRotationResult : KMPCLBase
- (instancetype)initWithCcw:(double)ccw cw:(double)cw last:(double)last __attribute__((swift_name("init(ccw:cw:last:)"))) __attribute__((objc_designated_initializer));
- (KMPCLRotationResult *)doCopyCcw:(double)ccw cw:(double)cw last:(double)last __attribute__((swift_name("doCopy(ccw:cw:last:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double ccw __attribute__((swift_name("ccw")));
@property (readonly) double cw __attribute__((swift_name("cw")));
@property (readonly) double last __attribute__((swift_name("last")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CsvConstants")))
@interface KMPCLCsvConstants : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)csvConstants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLCsvConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CSV_HEADER __attribute__((swift_name("CSV_HEADER")));
@property (readonly) int32_t DATA_ROUND_TO_DECIMALS __attribute__((swift_name("DATA_ROUND_TO_DECIMALS")));
@property (readonly) int32_t ROW_DATA_MIN_COUNT __attribute__((swift_name("ROW_DATA_MIN_COUNT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CsvConverter")))
@interface KMPCLCsvConverter : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)csvConverter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLCsvConverter *shared __attribute__((swift_name("shared")));
- (KMPCLAcquiredData * _Nullable)csvRowToDataRow:(NSString *)row __attribute__((swift_name("csvRowToData(row:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcquiredData")))
@interface KMPCLAcquiredData : KMPCLBase
- (instancetype)initWithTimeStamp:(int32_t)timeStamp packetCounter:(int32_t)packetCounter quatW:(double)quatW quatX:(double)quatX quatY:(double)quatY quatZ:(double)quatZ freeAccX:(double)freeAccX freeAccY:(double)freeAccY freeAccZ:(double)freeAccZ gyrX:(double)gyrX gyrY:(double)gyrY gyrZ:(double)gyrZ accX:(double)accX accY:(double)accY accZ:(double)accZ butterX:(double)butterX butterY:(double)butterY butterZ:(double)butterZ status:(int32_t)status isRunning:(BOOL)isRunning __attribute__((swift_name("init(timeStamp:packetCounter:quatW:quatX:quatY:quatZ:freeAccX:freeAccY:freeAccZ:gyrX:gyrY:gyrZ:accX:accY:accZ:butterX:butterY:butterZ:status:isRunning:)"))) __attribute__((objc_designated_initializer));
- (KMPCLAcquiredData *)doCopyTimeStamp:(int32_t)timeStamp packetCounter:(int32_t)packetCounter quatW:(double)quatW quatX:(double)quatX quatY:(double)quatY quatZ:(double)quatZ freeAccX:(double)freeAccX freeAccY:(double)freeAccY freeAccZ:(double)freeAccZ gyrX:(double)gyrX gyrY:(double)gyrY gyrZ:(double)gyrZ accX:(double)accX accY:(double)accY accZ:(double)accZ butterX:(double)butterX butterY:(double)butterY butterZ:(double)butterZ status:(int32_t)status isRunning:(BOOL)isRunning __attribute__((swift_name("doCopy(timeStamp:packetCounter:quatW:quatX:quatY:quatZ:freeAccX:freeAccY:freeAccZ:gyrX:gyrY:gyrZ:accX:accY:accZ:butterX:butterY:butterZ:status:isRunning:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double accX __attribute__((swift_name("accX")));
@property double accY __attribute__((swift_name("accY")));
@property double accZ __attribute__((swift_name("accZ")));
@property double butterX __attribute__((swift_name("butterX")));
@property double butterY __attribute__((swift_name("butterY")));
@property double butterZ __attribute__((swift_name("butterZ")));
@property (readonly) double freeAccX __attribute__((swift_name("freeAccX")));
@property (readonly) double freeAccY __attribute__((swift_name("freeAccY")));
@property double freeAccZ __attribute__((swift_name("freeAccZ")));
@property (readonly) double gyrX __attribute__((swift_name("gyrX")));
@property (readonly) double gyrY __attribute__((swift_name("gyrY")));
@property (readonly) double gyrZ __attribute__((swift_name("gyrZ")));
@property (readonly) BOOL isRunning __attribute__((swift_name("isRunning")));
@property (readonly) int32_t packetCounter __attribute__((swift_name("packetCounter")));
@property (readonly) double quatW __attribute__((swift_name("quatW")));
@property (readonly) double quatX __attribute__((swift_name("quatX")));
@property (readonly) double quatY __attribute__((swift_name("quatY")));
@property (readonly) double quatZ __attribute__((swift_name("quatZ")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) int32_t timeStamp __attribute__((swift_name("timeStamp")));
@end


/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationModel")))
@interface KMPCLCalculationModel : KMPCLBase
- (instancetype)initWithInterval:(NSString *)interval success:(BOOL)success messageId:(NSString *)messageId startCut:(int32_t)startCut mean:(double)mean std:(double)std nbrOfExs:(int32_t)nbrOfExs eccentricPhaseDuration:(double)eccentricPhaseDuration bestEccentricPhaseDuration:(double)bestEccentricPhaseDuration concentricPhaseDuration:(double)concentricPhaseDuration bestConcentricPhaseDuration:(double)bestConcentricPhaseDuration contactDuration:(double)contactDuration bestContactDuration:(double)bestContactDuration cmDepth:(double)cmDepth peakVelocity:(double)peakVelocity bestPeakVelocity:(double)bestPeakVelocity flightTime:(double)flightTime bestFlightTime:(double)bestFlightTime height:(double)height bestHeight:(double)bestHeight avgAccZ:(double)avgAccZ maxAccZ:(double)maxAccZ bestAccZ:(double)bestAccZ bestMaxAccZ:(double)bestMaxAccZ avgForceZ:(double)avgForceZ maxForceZ:(double)maxForceZ bestForceZ:(double)bestForceZ bestMaxForceZ:(double)bestMaxForceZ powerZ:(double)powerZ powerZKG:(double)powerZKG maxPowerZ:(double)maxPowerZ maxPowerZKG:(double)maxPowerZKG bestPowerZ:(double)bestPowerZ bestPowerZKG:(double)bestPowerZKG bestMaxPowerZ:(double)bestMaxPowerZ bestMaxPowerZKG:(double)bestMaxPowerZKG lsi:(double)lsi lsiEP:(double)lsiEP lsiCP:(double)lsiCP bestLsi:(double)bestLsi bestLsiEP:(double)bestLsiEP bestLsiCP:(double)bestLsiCP ccwRotation:(double)ccwRotation cwRotation:(double)cwRotation bestCcwRotation:(double)bestCcwRotation bestCwRotation:(double)bestCwRotation swayLenght:(double)swayLenght swayArea:(double)swayArea swayPercI:(double)swayPercI swayPercII:(double)swayPercII swayPercIII:(double)swayPercIII swayPercIV:(double)swayPercIV swayDisplacementAP:(double)swayDisplacementAP swayDisplacementML:(double)swayDisplacementML swayDisplacementAnt:(double)swayDisplacementAnt swayDisplacementPost:(double)swayDisplacementPost swayDisplacementDX:(double)swayDisplacementDX swayDisplacementSX:(double)swayDisplacementSX extraField:(NSString *)extraField maxPC:(int32_t)maxPC inner:(NSArray<KMPCLCalculationModel *> *)inner __attribute__((swift_name("init(interval:success:messageId:startCut:mean:std:nbrOfExs:eccentricPhaseDuration:bestEccentricPhaseDuration:concentricPhaseDuration:bestConcentricPhaseDuration:contactDuration:bestContactDuration:cmDepth:peakVelocity:bestPeakVelocity:flightTime:bestFlightTime:height:bestHeight:avgAccZ:maxAccZ:bestAccZ:bestMaxAccZ:avgForceZ:maxForceZ:bestForceZ:bestMaxForceZ:powerZ:powerZKG:maxPowerZ:maxPowerZKG:bestPowerZ:bestPowerZKG:bestMaxPowerZ:bestMaxPowerZKG:lsi:lsiEP:lsiCP:bestLsi:bestLsiEP:bestLsiCP:ccwRotation:cwRotation:bestCcwRotation:bestCwRotation:swayLenght:swayArea:swayPercI:swayPercII:swayPercIII:swayPercIV:swayDisplacementAP:swayDisplacementML:swayDisplacementAnt:swayDisplacementPost:swayDisplacementDX:swayDisplacementSX:extraField:maxPC:inner:)"))) __attribute__((objc_designated_initializer));
- (KMPCLCalculationModel *)doCopyInterval:(NSString *)interval success:(BOOL)success messageId:(NSString *)messageId startCut:(int32_t)startCut mean:(double)mean std:(double)std nbrOfExs:(int32_t)nbrOfExs eccentricPhaseDuration:(double)eccentricPhaseDuration bestEccentricPhaseDuration:(double)bestEccentricPhaseDuration concentricPhaseDuration:(double)concentricPhaseDuration bestConcentricPhaseDuration:(double)bestConcentricPhaseDuration contactDuration:(double)contactDuration bestContactDuration:(double)bestContactDuration cmDepth:(double)cmDepth peakVelocity:(double)peakVelocity bestPeakVelocity:(double)bestPeakVelocity flightTime:(double)flightTime bestFlightTime:(double)bestFlightTime height:(double)height bestHeight:(double)bestHeight avgAccZ:(double)avgAccZ maxAccZ:(double)maxAccZ bestAccZ:(double)bestAccZ bestMaxAccZ:(double)bestMaxAccZ avgForceZ:(double)avgForceZ maxForceZ:(double)maxForceZ bestForceZ:(double)bestForceZ bestMaxForceZ:(double)bestMaxForceZ powerZ:(double)powerZ powerZKG:(double)powerZKG maxPowerZ:(double)maxPowerZ maxPowerZKG:(double)maxPowerZKG bestPowerZ:(double)bestPowerZ bestPowerZKG:(double)bestPowerZKG bestMaxPowerZ:(double)bestMaxPowerZ bestMaxPowerZKG:(double)bestMaxPowerZKG lsi:(double)lsi lsiEP:(double)lsiEP lsiCP:(double)lsiCP bestLsi:(double)bestLsi bestLsiEP:(double)bestLsiEP bestLsiCP:(double)bestLsiCP ccwRotation:(double)ccwRotation cwRotation:(double)cwRotation bestCcwRotation:(double)bestCcwRotation bestCwRotation:(double)bestCwRotation swayLenght:(double)swayLenght swayArea:(double)swayArea swayPercI:(double)swayPercI swayPercII:(double)swayPercII swayPercIII:(double)swayPercIII swayPercIV:(double)swayPercIV swayDisplacementAP:(double)swayDisplacementAP swayDisplacementML:(double)swayDisplacementML swayDisplacementAnt:(double)swayDisplacementAnt swayDisplacementPost:(double)swayDisplacementPost swayDisplacementDX:(double)swayDisplacementDX swayDisplacementSX:(double)swayDisplacementSX extraField:(NSString *)extraField maxPC:(int32_t)maxPC inner:(NSArray<KMPCLCalculationModel *> *)inner __attribute__((swift_name("doCopy(interval:success:messageId:startCut:mean:std:nbrOfExs:eccentricPhaseDuration:bestEccentricPhaseDuration:concentricPhaseDuration:bestConcentricPhaseDuration:contactDuration:bestContactDuration:cmDepth:peakVelocity:bestPeakVelocity:flightTime:bestFlightTime:height:bestHeight:avgAccZ:maxAccZ:bestAccZ:bestMaxAccZ:avgForceZ:maxForceZ:bestForceZ:bestMaxForceZ:powerZ:powerZKG:maxPowerZ:maxPowerZKG:bestPowerZ:bestPowerZKG:bestMaxPowerZ:bestMaxPowerZKG:lsi:lsiEP:lsiCP:bestLsi:bestLsiEP:bestLsiCP:ccwRotation:cwRotation:bestCcwRotation:bestCwRotation:swayLenght:swayArea:swayPercI:swayPercII:swayPercIII:swayPercIV:swayDisplacementAP:swayDisplacementML:swayDisplacementAnt:swayDisplacementPost:swayDisplacementDX:swayDisplacementSX:extraField:maxPC:inner:)")));

/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property double avgAccZ __attribute__((swift_name("avgAccZ")));
@property double avgForceZ __attribute__((swift_name("avgForceZ")));
@property (readonly) double bestAccZ __attribute__((swift_name("bestAccZ")));
@property (readonly) double bestCcwRotation __attribute__((swift_name("bestCcwRotation")));
@property (readonly) double bestConcentricPhaseDuration __attribute__((swift_name("bestConcentricPhaseDuration")));
@property (readonly) double bestContactDuration __attribute__((swift_name("bestContactDuration")));
@property (readonly) double bestCwRotation __attribute__((swift_name("bestCwRotation")));
@property (readonly) double bestEccentricPhaseDuration __attribute__((swift_name("bestEccentricPhaseDuration")));
@property (readonly) double bestFlightTime __attribute__((swift_name("bestFlightTime")));
@property (readonly) double bestForceZ __attribute__((swift_name("bestForceZ")));
@property (readonly) double bestHeight __attribute__((swift_name("bestHeight")));
@property (readonly) double bestLsi __attribute__((swift_name("bestLsi")));
@property (readonly) double bestLsiCP __attribute__((swift_name("bestLsiCP")));
@property (readonly) double bestLsiEP __attribute__((swift_name("bestLsiEP")));
@property (readonly) double bestMaxAccZ __attribute__((swift_name("bestMaxAccZ")));
@property (readonly) double bestMaxForceZ __attribute__((swift_name("bestMaxForceZ")));
@property (readonly) double bestMaxPowerZ __attribute__((swift_name("bestMaxPowerZ")));
@property (readonly) double bestMaxPowerZKG __attribute__((swift_name("bestMaxPowerZKG")));
@property (readonly) double bestPeakVelocity __attribute__((swift_name("bestPeakVelocity")));
@property (readonly) double bestPowerZ __attribute__((swift_name("bestPowerZ")));
@property (readonly) double bestPowerZKG __attribute__((swift_name("bestPowerZKG")));
@property (readonly) double ccwRotation __attribute__((swift_name("ccwRotation")));
@property (readonly) double cmDepth __attribute__((swift_name("cmDepth")));
@property double concentricPhaseDuration __attribute__((swift_name("concentricPhaseDuration")));
@property (readonly) double contactDuration __attribute__((swift_name("contactDuration")));
@property (readonly) double cwRotation __attribute__((swift_name("cwRotation")));
@property (readonly) double eccentricPhaseDuration __attribute__((swift_name("eccentricPhaseDuration")));
@property (readonly) NSString *extraField __attribute__((swift_name("extraField")));
@property (readonly) double flightTime __attribute__((swift_name("flightTime")));
@property double height __attribute__((swift_name("height")));
@property NSArray<KMPCLCalculationModel *> *inner __attribute__((swift_name("inner")));
@property (readonly) NSString *interval __attribute__((swift_name("interval")));
@property (readonly) double lsi __attribute__((swift_name("lsi")));
@property (readonly) double lsiCP __attribute__((swift_name("lsiCP")));
@property (readonly) double lsiEP __attribute__((swift_name("lsiEP")));
@property (readonly) double maxAccZ __attribute__((swift_name("maxAccZ")));
@property (readonly) double maxForceZ __attribute__((swift_name("maxForceZ")));
@property int32_t maxPC __attribute__((swift_name("maxPC")));
@property (readonly) double maxPowerZ __attribute__((swift_name("maxPowerZ")));
@property (readonly) double maxPowerZKG __attribute__((swift_name("maxPowerZKG")));
@property double mean __attribute__((swift_name("mean")));
@property NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) int32_t nbrOfExs __attribute__((swift_name("nbrOfExs")));
@property (readonly) double peakVelocity __attribute__((swift_name("peakVelocity")));
@property double powerZ __attribute__((swift_name("powerZ")));
@property (readonly) double powerZKG __attribute__((swift_name("powerZKG")));
@property int32_t startCut __attribute__((swift_name("startCut")));
@property double std __attribute__((swift_name("std")));
@property BOOL success __attribute__((swift_name("success")));
@property (readonly) double swayArea __attribute__((swift_name("swayArea")));
@property (readonly) double swayDisplacementAP __attribute__((swift_name("swayDisplacementAP")));
@property (readonly) double swayDisplacementAnt __attribute__((swift_name("swayDisplacementAnt")));
@property (readonly) double swayDisplacementDX __attribute__((swift_name("swayDisplacementDX")));
@property (readonly) double swayDisplacementML __attribute__((swift_name("swayDisplacementML")));
@property (readonly) double swayDisplacementPost __attribute__((swift_name("swayDisplacementPost")));
@property (readonly) double swayDisplacementSX __attribute__((swift_name("swayDisplacementSX")));
@property (readonly) double swayLenght __attribute__((swift_name("swayLenght")));
@property (readonly) double swayPercI __attribute__((swift_name("swayPercI")));
@property (readonly) double swayPercII __attribute__((swift_name("swayPercII")));
@property (readonly) double swayPercIII __attribute__((swift_name("swayPercIII")));
@property (readonly) double swayPercIV __attribute__((swift_name("swayPercIV")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KMPCLKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KMPCLKotlinEnum<E> : KMPCLBase <KMPCLKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Converted from Swift on 03/09/2025 (iOS branch `dev` - last commit ffc06f4b).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationMsgKeys")))
@interface KMPCLCalculationMsgKeys : KMPCLKotlinEnum<KMPCLCalculationMsgKeys *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Converted from Swift on 03/09/2025 (iOS branch `dev` - last commit ffc06f4b).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMPCLCalculationMsgKeys *empty __attribute__((swift_name("empty")));
@property (class, readonly) KMPCLCalculationMsgKeys *notImplemented __attribute__((swift_name("notImplemented")));
@property (class, readonly) KMPCLCalculationMsgKeys *dataError __attribute__((swift_name("dataError")));
@property (class, readonly) KMPCLCalculationMsgKeys *inAnalysis __attribute__((swift_name("inAnalysis")));
@property (class, readonly) KMPCLCalculationMsgKeys *continue_ __attribute__((swift_name("continue_")));
@property (class, readonly) KMPCLCalculationMsgKeys *noMovDetected __attribute__((swift_name("noMovDetected")));
@property (class, readonly) KMPCLCalculationMsgKeys *jumperNotStill __attribute__((swift_name("jumperNotStill")));
@property (class, readonly) KMPCLCalculationMsgKeys *athleteNotStill __attribute__((swift_name("athleteNotStill")));
@property (class, readonly) KMPCLCalculationMsgKeys *athleteBentDown __attribute__((swift_name("athleteBentDown")));
@property (class, readonly) KMPCLCalculationMsgKeys *noJumpFound __attribute__((swift_name("noJumpFound")));
@property (class, readonly) KMPCLCalculationMsgKeys *noRegularJump __attribute__((swift_name("noRegularJump")));
@property (class, readonly) KMPCLCalculationMsgKeys *noJumps __attribute__((swift_name("noJumps")));
@property (class, readonly) KMPCLCalculationMsgKeys *wrongJump __attribute__((swift_name("wrongJump")));
@property (class, readonly) KMPCLCalculationMsgKeys *ignoreJump __attribute__((swift_name("ignoreJump")));
@property (class, readonly) KMPCLCalculationMsgKeys *sequenceClosed __attribute__((swift_name("sequenceClosed")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorStartMov __attribute__((swift_name("errorStartMov")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorStartEccPhase __attribute__((swift_name("errorStartEccPhase")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorStartConcPhase __attribute__((swift_name("errorStartConcPhase")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorEndConcPhase __attribute__((swift_name("errorEndConcPhase")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorStartFlight __attribute__((swift_name("errorStartFlight")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorEndFlight __attribute__((swift_name("errorEndFlight")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorEndFlightNext __attribute__((swift_name("errorEndFlightNext")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorDropEnd __attribute__((swift_name("errorDropEnd")));
@property (class, readonly) KMPCLCalculationMsgKeys *errorDropEndNext __attribute__((swift_name("errorDropEndNext")));
+ (KMPCLKotlinArray<KMPCLCalculationMsgKeys *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMPCLCalculationMsgKeys *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationResults")))
@interface KMPCLCalculationResults : KMPCLBase
- (instancetype)initWithData:(NSArray<KMPCLSingleResult *> *)data messageKey:(NSString *)messageKey success:(BOOL)success __attribute__((swift_name("init(data:messageKey:success:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLCalculationResultsCompanion *companion __attribute__((swift_name("companion")));
- (KMPCLCalculationResults *)doCopyData:(NSArray<KMPCLSingleResult *> *)data messageKey:(NSString *)messageKey success:(BOOL)success __attribute__((swift_name("doCopy(data:messageKey:success:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<KMPCLSingleResult *> *data __attribute__((swift_name("data")));
@property (readonly) NSString *messageKey __attribute__((swift_name("messageKey")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculationResults.Companion")))
@interface KMPCLCalculationResultsCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLCalculationResultsCompanion *shared __attribute__((swift_name("shared")));
- (KMPCLCalculationResults *)errorCalc:(KMPCLCalculationModel *)calc __attribute__((swift_name("error(calc:)")));
- (KMPCLCalculationResults *)fromCalc:(KMPCLCalculationModel *)calc data:(NSArray<KMPCLSingleResult *> *)data __attribute__((swift_name("from(calc:data:)")));
- (id<KMPCLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetailedResults")))
@interface KMPCLDetailedResults : KMPCLBase
- (instancetype)initWithAvg_values:(KMPCLCalculationResults * _Nullable)avg_values best_values:(KMPCLCalculationResults * _Nullable)best_values single_values:(KMPCLCalculationResults * _Nullable)single_values inner:(NSArray<KMPCLDetailedResults *> * _Nullable)inner numOfItems:(KMPCLInt * _Nullable)numOfItems __attribute__((swift_name("init(avg_values:best_values:single_values:inner:numOfItems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLDetailedResultsCompanion *companion __attribute__((swift_name("companion")));
- (KMPCLDetailedResults *)doCopyAvg_values:(KMPCLCalculationResults * _Nullable)avg_values best_values:(KMPCLCalculationResults * _Nullable)best_values single_values:(KMPCLCalculationResults * _Nullable)single_values inner:(NSArray<KMPCLDetailedResults *> * _Nullable)inner numOfItems:(KMPCLInt * _Nullable)numOfItems __attribute__((swift_name("doCopy(avg_values:best_values:single_values:inner:numOfItems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMPCLCalculationResults * _Nullable avg_values __attribute__((swift_name("avg_values")));
@property (readonly) KMPCLCalculationResults * _Nullable best_values __attribute__((swift_name("best_values")));
@property (readonly) NSArray<KMPCLDetailedResults *> * _Nullable inner __attribute__((swift_name("inner")));
@property (readonly) KMPCLInt * _Nullable numOfItems __attribute__((swift_name("numOfItems")));
@property (readonly) KMPCLCalculationResults * _Nullable single_values __attribute__((swift_name("single_values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetailedResults.Companion")))
@interface KMPCLDetailedResultsCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLDetailedResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<KMPCLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseType")))
@interface KMPCLExerciseType : KMPCLKotlinEnum<KMPCLExerciseType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Ported from Swift with AI-assisted conversion on 08/05/2025 (iOS branch `dev`).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMPCLExerciseTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMPCLExerciseType *cmj __attribute__((swift_name("cmj")));
@property (class, readonly) KMPCLExerciseType *sj __attribute__((swift_name("sj")));
@property (class, readonly) KMPCLExerciseType *stiffness __attribute__((swift_name("stiffness")));
@property (class, readonly) KMPCLExerciseType *drop __attribute__((swift_name("drop")));
@property (class, readonly) KMPCLExerciseType *flexionForward __attribute__((swift_name("flexionForward")));
@property (class, readonly) KMPCLExerciseType *extension __attribute__((swift_name("extension")));
@property (class, readonly) KMPCLExerciseType *twist __attribute__((swift_name("twist")));
@property (class, readonly) KMPCLExerciseType *flexionLateral __attribute__((swift_name("flexionLateral")));
@property (class, readonly) KMPCLExerciseType *liftWeightWithBarbel __attribute__((swift_name("liftWeightWithBarbel")));
@property (class, readonly) KMPCLExerciseType *liftWeightWithPress45 __attribute__((swift_name("liftWeightWithPress45")));
@property (class, readonly) KMPCLExerciseType *liftWeightWithPressHorizontal __attribute__((swift_name("liftWeightWithPressHorizontal")));
@property (class, readonly) KMPCLExerciseType *liftWeightWithPressVertical __attribute__((swift_name("liftWeightWithPressVertical")));
@property (class, readonly) KMPCLExerciseType *sway __attribute__((swift_name("sway")));
@property (class, readonly) KMPCLExerciseType *pullUp __attribute__((swift_name("pullUp")));
@property (class, readonly) KMPCLExerciseType *romNeckBackForward __attribute__((swift_name("romNeckBackForward")));
@property (class, readonly) KMPCLExerciseType *romNeckLateral __attribute__((swift_name("romNeckLateral")));
@property (class, readonly) KMPCLExerciseType *romNeckTwist __attribute__((swift_name("romNeckTwist")));
@property (class, readonly) KMPCLExerciseType *romElbow __attribute__((swift_name("romElbow")));
@property (class, readonly) KMPCLExerciseType *romShoulderBentElbow __attribute__((swift_name("romShoulderBentElbow")));
@property (class, readonly) KMPCLExerciseType *romShoulderExtendedArm __attribute__((swift_name("romShoulderExtendedArm")));
@property (class, readonly) KMPCLExerciseType *romHipBack __attribute__((swift_name("romHipBack")));
@property (class, readonly) KMPCLExerciseType *romHipForward __attribute__((swift_name("romHipForward")));
@property (class, readonly) KMPCLExerciseType *romHipKneeLateral __attribute__((swift_name("romHipKneeLateral")));
@property (class, readonly) KMPCLExerciseType *romHipLateral __attribute__((swift_name("romHipLateral")));
@property (class, readonly) KMPCLExerciseType *romKnee __attribute__((swift_name("romKnee")));
@property (class, readonly) KMPCLExerciseType *romFootBackForward __attribute__((swift_name("romFootBackForward")));
@property (class, readonly) KMPCLExerciseType *romFootLateral __attribute__((swift_name("romFootLateral")));
@property (class, readonly) KMPCLExerciseType *romKneeFlex __attribute__((swift_name("romKneeFlex")));
@property (class, readonly) KMPCLExerciseType *romShoulderExtArmLateral __attribute__((swift_name("romShoulderExtArmLateral")));
@property (class, readonly) KMPCLExerciseType *romShoulderBentElbowSupine __attribute__((swift_name("romShoulderBentElbowSupine")));
@property (class, readonly) KMPCLExerciseType *liftWeightWithSquat __attribute__((swift_name("liftWeightWithSquat")));
+ (KMPCLKotlinArray<KMPCLExerciseType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMPCLExerciseType *> *entries __attribute__((swift_name("entries")));
- (BOOL)isRom __attribute__((swift_name("isRom()")));
- (BOOL)isSupported __attribute__((swift_name("isSupported()")));
- (BOOL)isSway __attribute__((swift_name("isSway()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseType.Companion")))
@interface KMPCLExerciseTypeCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLExerciseTypeCompanion *shared __attribute__((swift_name("shared")));
- (KMPCLExerciseType *)fromIntValue:(int32_t)value __attribute__((swift_name("fromInt(value:)")));
@end


/**
 * ID of params in DB
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParamsIds")))
@interface KMPCLParamsIds : KMPCLKotlinEnum<KMPCLParamsIds *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ID of params in DB
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMPCLParamsIds *nbrOfJumps __attribute__((swift_name("nbrOfJumps")));
@property (class, readonly) KMPCLParamsIds *nbrOfReps __attribute__((swift_name("nbrOfReps")));
@property (class, readonly) KMPCLParamsIds *eccentricphaseduration __attribute__((swift_name("eccentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *avgEccentricphaseduration __attribute__((swift_name("avgEccentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *bestEccentricphaseduration __attribute__((swift_name("bestEccentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *concentricphaseduration __attribute__((swift_name("concentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *avgConcentricphaseduration __attribute__((swift_name("avgConcentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *bestConcentricphaseduration __attribute__((swift_name("bestConcentricphaseduration")));
@property (class, readonly) KMPCLParamsIds *contactduration __attribute__((swift_name("contactduration")));
@property (class, readonly) KMPCLParamsIds *avgContactduration __attribute__((swift_name("avgContactduration")));
@property (class, readonly) KMPCLParamsIds *bestContactduration __attribute__((swift_name("bestContactduration")));
@property (class, readonly) KMPCLParamsIds *cmdepth __attribute__((swift_name("cmdepth")));
@property (class, readonly) KMPCLParamsIds *flighttime __attribute__((swift_name("flighttime")));
@property (class, readonly) KMPCLParamsIds *avgFlighttime __attribute__((swift_name("avgFlighttime")));
@property (class, readonly) KMPCLParamsIds *bestFlighttime __attribute__((swift_name("bestFlighttime")));
@property (class, readonly) KMPCLParamsIds *height __attribute__((swift_name("height")));
@property (class, readonly) KMPCLParamsIds *avgHeight __attribute__((swift_name("avgHeight")));
@property (class, readonly) KMPCLParamsIds *bestHeight __attribute__((swift_name("bestHeight")));
@property (class, readonly) KMPCLParamsIds *peakvelocity __attribute__((swift_name("peakvelocity")));
@property (class, readonly) KMPCLParamsIds *avgPeakvelocity __attribute__((swift_name("avgPeakvelocity")));
@property (class, readonly) KMPCLParamsIds *bestPeakvelocity __attribute__((swift_name("bestPeakvelocity")));
@property (class, readonly) KMPCLParamsIds *accz __attribute__((swift_name("accz")));
@property (class, readonly) KMPCLParamsIds *maxaccz __attribute__((swift_name("maxaccz")));
@property (class, readonly) KMPCLParamsIds *avgAccz __attribute__((swift_name("avgAccz")));
@property (class, readonly) KMPCLParamsIds *avgMaxaccz __attribute__((swift_name("avgMaxaccz")));
@property (class, readonly) KMPCLParamsIds *bestAccz __attribute__((swift_name("bestAccz")));
@property (class, readonly) KMPCLParamsIds *bestMaxaccz __attribute__((swift_name("bestMaxaccz")));
@property (class, readonly) KMPCLParamsIds *forcez __attribute__((swift_name("forcez")));
@property (class, readonly) KMPCLParamsIds *maxforcez __attribute__((swift_name("maxforcez")));
@property (class, readonly) KMPCLParamsIds *avgForcez __attribute__((swift_name("avgForcez")));
@property (class, readonly) KMPCLParamsIds *avgMaxforcez __attribute__((swift_name("avgMaxforcez")));
@property (class, readonly) KMPCLParamsIds *bestForcez __attribute__((swift_name("bestForcez")));
@property (class, readonly) KMPCLParamsIds *bestMaxforcez __attribute__((swift_name("bestMaxforcez")));
@property (class, readonly) KMPCLParamsIds *powerz __attribute__((swift_name("powerz")));
@property (class, readonly) KMPCLParamsIds *avgPowerz __attribute__((swift_name("avgPowerz")));
@property (class, readonly) KMPCLParamsIds *maxpowerz __attribute__((swift_name("maxpowerz")));
@property (class, readonly) KMPCLParamsIds *avgMaxpowerz __attribute__((swift_name("avgMaxpowerz")));
@property (class, readonly) KMPCLParamsIds *bestPowerz __attribute__((swift_name("bestPowerz")));
@property (class, readonly) KMPCLParamsIds *bestMaxpowerz __attribute__((swift_name("bestMaxpowerz")));
@property (class, readonly) KMPCLParamsIds *powerzkg __attribute__((swift_name("powerzkg")));
@property (class, readonly) KMPCLParamsIds *avgPowerzkg __attribute__((swift_name("avgPowerzkg")));
@property (class, readonly) KMPCLParamsIds *maxpowerzkg __attribute__((swift_name("maxpowerzkg")));
@property (class, readonly) KMPCLParamsIds *avgMaxpowerzkg __attribute__((swift_name("avgMaxpowerzkg")));
@property (class, readonly) KMPCLParamsIds *bestPowerzkg __attribute__((swift_name("bestPowerzkg")));
@property (class, readonly) KMPCLParamsIds *bestMaxpowerzkg __attribute__((swift_name("bestMaxpowerzkg")));
@property (class, readonly) KMPCLParamsIds *lsi __attribute__((swift_name("lsi")));
@property (class, readonly) KMPCLParamsIds *lsiep __attribute__((swift_name("lsiep")));
@property (class, readonly) KMPCLParamsIds *lsicp __attribute__((swift_name("lsicp")));
@property (class, readonly) KMPCLParamsIds *avgLsi __attribute__((swift_name("avgLsi")));
@property (class, readonly) KMPCLParamsIds *avgLsiep __attribute__((swift_name("avgLsiep")));
@property (class, readonly) KMPCLParamsIds *avgLsicp __attribute__((swift_name("avgLsicp")));
@property (class, readonly) KMPCLParamsIds *bestLsi __attribute__((swift_name("bestLsi")));
@property (class, readonly) KMPCLParamsIds *bestLsiep __attribute__((swift_name("bestLsiep")));
@property (class, readonly) KMPCLParamsIds *bestLsicp __attribute__((swift_name("bestLsicp")));
@property (class, readonly) KMPCLParamsIds *rotationSingleDeg __attribute__((swift_name("rotationSingleDeg")));
@property (class, readonly) KMPCLParamsIds *bestRotationSingleDeg __attribute__((swift_name("bestRotationSingleDeg")));
@property (class, readonly) KMPCLParamsIds *rotationDoubleDeg __attribute__((swift_name("rotationDoubleDeg")));
@property (class, readonly) KMPCLParamsIds *bestRotationDoubleDeg __attribute__((swift_name("bestRotationDoubleDeg")));
@property (class, readonly) KMPCLParamsIds *ccwrotation __attribute__((swift_name("ccwrotation")));
@property (class, readonly) KMPCLParamsIds *cwrotation __attribute__((swift_name("cwrotation")));
@property (class, readonly) KMPCLParamsIds *bestCcwrotation __attribute__((swift_name("bestCcwrotation")));
@property (class, readonly) KMPCLParamsIds *bestCwrotation __attribute__((swift_name("bestCwrotation")));
@property (class, readonly) KMPCLParamsIds *swaylenght __attribute__((swift_name("swaylenght")));
@property (class, readonly) KMPCLParamsIds *swayarea __attribute__((swift_name("swayarea")));
@property (class, readonly) KMPCLParamsIds *swayperci __attribute__((swift_name("swayperci")));
@property (class, readonly) KMPCLParamsIds *swaypercii __attribute__((swift_name("swaypercii")));
@property (class, readonly) KMPCLParamsIds *swayperciii __attribute__((swift_name("swayperciii")));
@property (class, readonly) KMPCLParamsIds *swayperciv __attribute__((swift_name("swayperciv")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementap __attribute__((swift_name("swaydisplacementap")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementml __attribute__((swift_name("swaydisplacementml")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementant __attribute__((swift_name("swaydisplacementant")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementpost __attribute__((swift_name("swaydisplacementpost")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementdx __attribute__((swift_name("swaydisplacementdx")));
@property (class, readonly) KMPCLParamsIds *swaydisplacementsx __attribute__((swift_name("swaydisplacementsx")));
+ (KMPCLKotlinArray<KMPCLParamsIds *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMPCLParamsIds *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleResult")))
@interface KMPCLSingleResult : KMPCLBase
- (instancetype)initWithParamId:(NSString *)paramId value:(NSString *)value __attribute__((swift_name("init(paramId:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLSingleResultCompanion *companion __attribute__((swift_name("companion")));
- (KMPCLSingleResult *)doCopyParamId:(NSString *)paramId value:(NSString *)value __attribute__((swift_name("doCopy(paramId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *paramId __attribute__((swift_name("paramId")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleResult.Companion")))
@interface KMPCLSingleResultCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLSingleResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KMPCLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitsModel")))
@interface KMPCLUnitsModel : KMPCLBase
- (instancetype)initWithId:(NSString *)id nameKey:(NSString *)nameKey unitOfMeasureKey:(NSString * _Nullable)unitOfMeasureKey __attribute__((swift_name("init(id:nameKey:unitOfMeasureKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMPCLUnitsModelCompanion *companion __attribute__((swift_name("companion")));
- (KMPCLUnitsModel *)doCopyId:(NSString *)id nameKey:(NSString *)nameKey unitOfMeasureKey:(NSString * _Nullable)unitOfMeasureKey __attribute__((swift_name("doCopy(id:nameKey:unitOfMeasureKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *nameKey __attribute__((swift_name("nameKey")));
@property (readonly) NSString * _Nullable unitOfMeasureKey __attribute__((swift_name("unitOfMeasureKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitsModel.Companion")))
@interface KMPCLUnitsModelCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLUnitsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<KMPCLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VariantType")))
@interface KMPCLVariantType : KMPCLKotlinEnum<KMPCLVariantType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMPCLVariantTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMPCLVariantType *armsOnHips __attribute__((swift_name("armsOnHips")));
@property (class, readonly) KMPCLVariantType *freeArms __attribute__((swift_name("freeArms")));
@property (class, readonly) KMPCLVariantType *leftSide __attribute__((swift_name("leftSide")));
@property (class, readonly) KMPCLVariantType *rightSide __attribute__((swift_name("rightSide")));
+ (KMPCLKotlinArray<KMPCLVariantType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMPCLVariantType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VariantType.Companion")))
@interface KMPCLVariantTypeCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLVariantTypeCompanion *shared __attribute__((swift_name("shared")));
- (KMPCLVariantType * _Nullable)fromIntValue:(int32_t)value __attribute__((swift_name("fromInt(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberFormatter")))
@interface KMPCLNumberFormatter : KMPCLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)formatDoubleDouble:(double)double_ decimals:(int32_t)decimals __attribute__((swift_name("formatDouble(double:decimals:)")));
- (NSString *)formatIntInt:(int32_t)int_ __attribute__((swift_name("formatInt(int:)")));
@end

@interface KMPCLAcquiredData (Extensions)

/**
 * Converts the receiver [AcquiredData] into a comma-separated value row String, using the Yomido calculations default
 * format and ordering.
 *
 * @param decimals The number of floating point decimals to retain when rounding to format the values into strings.
 * @param formatter The [NumberFormatter] to use to generate the output number strings.
 * @param measurementId The ID that identifies the bundle of measurements the [AcquiredData] belongs to.
 */
- (NSString *)toCsvRowDecimals:(int32_t)decimals measurementId:(NSString *)measurementId formatter:(KMPCLNumberFormatter *)formatter __attribute__((swift_name("toCsvRow(decimals:measurementId:formatter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CsvConvertersKt")))
@interface KMPCLCsvConvertersKt : KMPCLBase
+ (KMPCLAcquiredData *)csvRowToData:(NSArray<NSString *> *)receiver __attribute__((swift_name("csvRowToData(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumAnalisysUtilsKt")))
@interface KMPCLNumAnalisysUtilsKt : KMPCLBase
+ (void)debugLogMessage:(NSString *)message __attribute__((swift_name("debugLog(message:)")));
@property (class, readonly) double REAL_G __attribute__((swift_name("REAL_G")));
@property (class, readonly) double SWIFT_PI __attribute__((swift_name("SWIFT_PI")));
@property (class, readonly) double VEL_TOLERANCE __attribute__((swift_name("VEL_TOLERANCE")));
@property (class, readonly) BOOL VERBOSE __attribute__((swift_name("VERBOSE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KMPCLKotlinEnumCompanion : KMPCLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMPCLKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KMPCLKotlinArray<T> : KMPCLBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KMPCLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KMPCLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KMPCLKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KMPCLKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMPCLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KMPCLKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KMPCLKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KMPCLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KMPCLKotlinx_serialization_coreKSerializer <KMPCLKotlinx_serialization_coreSerializationStrategy, KMPCLKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KMPCLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KMPCLKotlinx_serialization_coreEncoder
@required
- (id<KMPCLKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KMPCLKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KMPCLKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KMPCLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KMPCLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KMPCLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KMPCLKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KMPCLKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KMPCLKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KMPCLKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KMPCLKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KMPCLKotlinx_serialization_coreDecoder
@required
- (id<KMPCLKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KMPCLKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KMPCLKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KMPCLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KMPCLKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KMPCLKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMPCLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMPCLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KMPCLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KMPCLKotlinx_serialization_coreSerializersModule : KMPCLBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KMPCLKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMPCLKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KMPCLKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KMPCLKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMPCLKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMPCLKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMPCLKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMPCLKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KMPCLKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KMPCLKotlinx_serialization_coreSerialKind : KMPCLBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KMPCLKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KMPCLKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KMPCLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KMPCLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KMPCLKotlinNothing : KMPCLBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KMPCLKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KMPCLKotlinKClass>)kClass provider:(id<KMPCLKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KMPCLKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KMPCLKotlinKClass>)kClass serializer:(id<KMPCLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KMPCLKotlinKClass>)baseClass actualClass:(id<KMPCLKotlinKClass>)actualClass actualSerializer:(id<KMPCLKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KMPCLKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KMPCLKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMPCLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KMPCLKotlinKClass>)baseClass defaultSerializerProvider:(id<KMPCLKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KMPCLKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KMPCLKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KMPCLKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KMPCLKotlinKClass <KMPCLKotlinKDeclarationContainer, KMPCLKotlinKAnnotatedElement, KMPCLKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
