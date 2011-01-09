/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPParagraph;



@interface CPParagraphFlow : NSObject 
{
    CPParagraph *paragraph;
    float fLeft;
    float fRight;
    float fTop;
    float fBottom;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    BOOL placed;
    BOOL adjacentToCallout;
    NSInteger calloutType;
    CPParagraph *nextInColumn;
}

@property CPParagraph *nextInColumn;
@property NSInteger calloutType;
@property BOOL placed;
@property float fRight;
@property float fLeft;
@property(retain) CPParagraph *paragraph;


- (id)initWithParagraph:(id)arg1;
- (id)paragraph;
- (NSInteger)leftOrder;
- (NSInteger)rightOrder;
- (id)description;
- (void)dealloc;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 rects:(id)arg3;
- (BOOL)intervalOverlapTop:(float)arg1 bottom:(float)arg2 paragraphs:(id)arg3;
- (id)simpleRule:(NSUInteger)arg1;
- (id)ignoreCallouts:(NSUInteger)arg1;
- (id)twoSides:(NSUInteger)arg1;
- (id)belowTwoSides:(NSUInteger)arg1;
- (void)removeFromBelow:(id)arg1;
- (void)removeFromAbove:(id)arg1;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (NSInteger)inOrder:(BOOL)arg1;
- (void)setNextInColumn:(id)arg1;
- (void)setFRight:(float)arg1;
- (void)setFLeft:(float)arg1;
- (void)setParagraph:(id)arg1;
- (id)nextInColumn;
- (id)paragraphsBelow;
- (float)fRight;
- (float)fLeft;
- (void)setCalloutType:(NSInteger)arg1;
- (void)removeFromFlow;
- (id)paragraphsLeft;
- (id)paragraphsRight;
- (float)dBelow;
- (float)dAbove;
- (id)paragraphsAbove;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })belowBounds;
- (NSInteger)calloutType;
- (void)setParagraphsAboveIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (NSInteger)topDescending:(id)arg1;
- (void)setPlaced:(BOOL)arg1;
- (id)nextParagraphInColumn:(id)arg1;
- (BOOL)placed;
- (NSInteger)outOrder;
- (NSInteger)inOrder;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 paragraphs:(id)arg3;
- (float)area;

@end