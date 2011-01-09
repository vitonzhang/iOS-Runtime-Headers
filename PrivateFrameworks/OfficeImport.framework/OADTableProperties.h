/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADTableStyle;



@interface OADTableProperties : OADDrawableProperties <OADEffectsParent>
{
    NSString *mStyleId;
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
    NSArray *mEffects;
}

+ (id)defaultProperties;

- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (void)setStyleId:(id)arg1;
- (BOOL)rightToLeft;
- (void)setFirstRow:(BOOL)arg1;
- (void)setBandColumn:(BOOL)arg1;
- (void)setBandRow:(BOOL)arg1;
- (void)setRightToLeft:(BOOL)arg1;
- (BOOL)bandRow;
- (BOOL)lastRow;
- (id)styleId;
- (void)setLastRow:(BOOL)arg1;
- (BOOL)bandColumn;
- (BOOL)hasBandsNormalToDir:(NSInteger)arg1;
- (BOOL)hasVectorNormalToDir:(NSInteger)arg1 atExtremePos:(NSInteger)arg2;
- (id)initWithDefaults;
- (BOOL)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setLastColumn:(BOOL)arg1;
- (BOOL)lastColumn;
- (BOOL)firstColumn;
- (BOOL)firstRow;
- (void)setFirstColumn:(BOOL)arg1;

@end