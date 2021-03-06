/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AXEventPathInfoRepresentation, IMMessage, IMMessageItem, NSDictionary, NSString;

@interface NSArray : NSObject <CKRecordValue, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable, PQLBindable> {
}

@property(retain,readonly) IMMessageItem * __imLastMessageItem;
@property(readonly) NSDictionary * bw_builtInMicRouteDictionary;
@property(readonly) unsigned int count;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) AXEventPathInfoRepresentation * firstPath;
@property(readonly) unsigned int hash;
@property(retain,readonly) IMMessage * lastFinishedMessage;
@property(retain,readonly) IMMessage * lastIncomingFinishedMessage;
@property(retain,readonly) IMMessage * lastIncomingMessage;
@property(retain,readonly) IMMessage * lastMessage;
@property(readonly) Class superclass;

+ (id)_arrayWithIntArg:(int)arg1 additionalArgs:(void*)arg2;
+ (id)_gkArrayWithIndexSet:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned int)arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithInts:(int*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithValues:(id)arg1 inBlock:(id)arg2;
+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned int)arg1;
+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned long)arg3;
+ (id)cdvArrayWithIntegers:(int)arg1;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)tsu_arrayWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
+ (id)tsu_arrayWithInts:(int*)arg1 count:(unsigned int)arg2;
+ (id)tsu_arrayWithUIntegers:(unsigned int*)arg1 count:(unsigned int)arg2;

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CNFRegArrayPassingTest:(id)arg1;
- (id)CNFRegArrayPassingTests:(id)arg1;
- (BOOL)CalContainsObjectIdenticalTo:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (BOOL)ICSContainsArray:(id)arg1;
- (BOOL)MPIsEmpty;
- (id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)SCNMutableDeepCopy;
- (id)_FTFilteredArrayForAPS;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)_ICSStringsForPropertyValuesWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;
- (id)__ck_IMChatItemsAtIndexes:(id)arg1;
- (id)__ck_commaJoinedValueForKey:(id)arg1;
- (unsigned int)__ck_indexOfMediaObject:(id)arg1;
- (unsigned int)__ck_indexOfTransfer:(id)arg1;
- (id)__ck_indexSetForIndexPathItemsInSection:(int)arg1;
- (id)__ck_indexSetForIndexPathRowsInSection:(int)arg1;
- (id)__ck_indexesOfPartsOfMessage:(id)arg1;
- (id)__ck_indexesOfUnplayedAudioMessages;
- (id)__ck_messageForChatItemAtIndex:(unsigned int)arg1;
- (void)__ck_unloadSizesAtIndexes:(id)arg1;
- (void)__ck_unloadTranscriptTextAtIndexes:(id)arg1;
- (void)__enumerateItemsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)__imArrayByApplyingBlock:(id)arg1;
- (id)__imArrayByApplyingBlock:(id)arg1 filter:(id)arg2;
- (id)__imArrayByFilteringWithBlock:(id)arg1;
- (id)__imDeepCopy;
- (id)__imFirstObject;
- (void)__imForEach:(id)arg1;
- (BOOL)__imIsMutable;
- (id)__imItems;
- (id)__imLastMessageItem;
- (id)__imSetFromArray;
- (id)__itemForChatItemAtIndex:(unsigned int)arg1;
- (id)_arrayByFilteringCandidatesForNonExtendedView;
- (id)_avgForKeyPath:(id)arg1;
- (unsigned long)_cfTypeID;
- (BOOL)_containsSubArray:(id)arg1;
- (id)_copyForEnumerating;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_filteredArrayOfObjectsPassingTest:(id)arg1;
- (id)_gkBubbleOfType:(int)arg1;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2 usingSelector:(SEL)arg3;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFilterWithBlock:(id)arg1;
- (id)_gkFirstObject;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(id)arg2;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkInternalsFromPlayers;
- (id)_gkMapConcurrentlyWithBlock:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id)arg1;
- (id)_gkOrderedSet;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkSubarraysByKeyWithBlock:(id)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkValuesForKeyPath:(id)arg1;
- (BOOL)_hasObjects;
- (BOOL)_hasSameMembers:(id)arg1;
- (BOOL)_hasStrongReferences;
- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct CGSize { float x1; float x2; })_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; }*)arg2 forWidth:(float)arg3 withFont:(id)arg4 lineBreakMode:(int)arg5;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (unsigned int)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_nextToLastObject;
- (id)_sa_mappedArrayWithBlock:(id)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3;
- (id)_spliceAt:(int)arg1 amount:(int)arg2 andInsert:(id)arg3;
- (id)_spliceAt:(int)arg1 amount:(int)arg2 andOverlay:(id)arg3;
- (id)_stringToWrite;
- (id)_subsequenceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)_subsequenceFromIndex:(unsigned int)arg1;
- (id)_subsequenceToIndex:(unsigned int)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_ui_firstObject;
- (id)_ui_onlyObject;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_web_lowercaseStrings;
- (id)_webkit_numberAtIndex:(unsigned int)arg1;
- (id)_webkit_stringAtIndex:(unsigned int)arg1;
- (id)_withoutEmptyStrings;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned int)arg4 context:(void*)arg5;
- (id)afui_arrayByMappingWithBlock:(id)arg1;
- (id)allObjects;
- (id)allObjectsWithClass:(Class)arg1;
- (id)allObjectsWithClass:(Class)arg1;
- (void)appendJsonStringToString:(id)arg1;
- (id)arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)arrayByFlattening;
- (id)arrayByPerformingSpecifierUpdatesUsingBlock:(id)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (id)arrayByRemovingObjectsFromArray:(id)arg1;
- (id)arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)arrayByReversingOrder;
- (id)arrayByTransformingWithBlock:(id)arg1;
- (id)arrayOfObjectsPassingTest:(id)arg1;
- (id)arrayWithObjectsInSet:(id)arg1;
- (id)assetForIdentifier:(id)arg1;
- (BOOL)b_boolAtIndex:(unsigned int)arg1;
- (BOOL)bl_boolAtIndex:(unsigned int)arg1 defaultValue:(BOOL)arg2;
- (BOOL)bl_containsObjectIdenticalTo:(id)arg1;
- (double)bl_doubleAtIndex:(unsigned int)arg1;
- (double)bl_doubleAtIndex:(unsigned int)arg1 defaultValue:(double)arg2;
- (id)bl_firstObjectWithStringValue:(id)arg1 forKey:(id)arg2;
- (float)bl_floatAtIndex:(unsigned int)arg1;
- (float)bl_floatAtIndex:(unsigned int)arg1 defaultValue:(float)arg2;
- (int)bl_intAtIndex:(unsigned int)arg1;
- (int)bl_intAtIndex:(unsigned int)arg1 defaultValue:(int)arg2;
- (id)bl_nextToLastObject;
- (id)bl_objectAtIndex:(unsigned int)arg1 defaultValue:(id)arg2;
- (id)bl_objectAtIndexNoThrow:(int)arg1;
- (id)bl_objectOrNullAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectAtIndex:(unsigned int)arg1 defaultValue:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)bl_secondObject;
- (BOOL)bs_containsObjectPassingTest:(id)arg1;
- (void)bs_each:(id)arg1;
- (id)bs_filter:(id)arg1;
- (id)bs_first:(unsigned int)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_firstObjectPassingTest:(id)arg1;
- (id)bs_flatten;
- (id)bs_map:(id)arg1;
- (id)bs_mapNoNulls:(id)arg1;
- (id)bs_reverse;
- (id)bw_builtInMicRouteDictionary;
- (Class)classForCoder;
- (id)componentsJoinedByString:(id)arg1;
- (id)componentsJoinedIntoListWithMaxItems:(int)arg1;
- (id)composeRecipientAddresses;
- (id)composeRecipientHandles;
- (id)composeRecipientNormalizedAddresses;
- (BOOL)containsAtleastOneOf:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsString:(id)arg1;
- (id)copyDeep_MC;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countForObject:(id)arg1;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)countObjectsPassingTest:(id)arg1;
- (unsigned int)countObjectsPassingTest:(id)arg1;
- (id)cplDeepCopy;
- (unsigned int)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(id)arg2 match:(BOOL*)arg3;
- (id)cr_firstObjectPassingTest:(id)arg1;
- (id)cr_insertionSortedArrayUsingComparator:(id)arg1;
- (id)cr_map:(id)arg1;
- (id)cutFirstObject;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (void)differencesFromArray:(id)arg1 usingComparator:(id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMessagesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateSnapshotObjectsUsingBlock:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)firstPath;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (int)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfSmallestObject;
- (unsigned int)indexOfSpecifierWithID:(id)arg1;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)indexesOfObjects:(id)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithInts:(int*)arg1 count:(unsigned int)arg2;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)intersectionWithArray:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (BOOL)isNSArray__;
- (BOOL)kn_isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)lastFinishedMessage;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)map:(id)arg1;
- (id)max:(id)arg1;
- (id)messageForChatItemAtIndex:(unsigned int)arg1;
- (id)messages;
- (BOOL)mf_all:(id)arg1;
- (BOOL)mf_any:(id)arg1;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3;
- (id)mf_dictionaryWithMessagesSortedByStore;
- (id)mf_filter:(id)arg1;
- (id)mf_firstObjectPassingTest:(id)arg1;
- (id)mf_flatten;
- (unsigned int)mf_indexOfMailboxDictionaryWithName:(id)arg1;
- (unsigned int)mf_indexOfObject:(id)arg1 usingComparator:(id)arg2;
- (unsigned int)mf_indexOfObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (unsigned int)mf_indexOfRecipientWithEmailAddress:(id)arg1;
- (unsigned int)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id)arg2;
- (unsigned int)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)mf_indicesOfStringsWithPrefix:(id)arg1;
- (id)mf_map:(id)arg1;
- (id)mf_objectEquivalentTo:(id)arg1 usingComparator:(id)arg2;
- (id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)mf_objectsPassingTest:(id)arg1;
- (id)mf_reduce:(id)arg1;
- (id)mf_uncommentedAddressList;
- (id)mf_uniquifyWithComparator:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)npkFindFirstObjectMatchingCondition:(id)arg1;
- (id)npkSafeObjectAtIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id)arg1;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)pathsMatchingExtensions:(id)arg1;
- (id)pickableRouteWithUID:(id)arg1;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (unsigned int)pl_countOfObjectsPassingTest:(id)arg1;
- (unsigned int)pl_indexOfFirstObjectInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 passingTest:(id)arg2;
- (unsigned int)pl_indexOfFirstObjectPassingTest:(id)arg1;
- (unsigned int)pl_indexOfLastObjectInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 passingTest:(id)arg2;
- (unsigned int)pl_indexOfLastObjectPassingTest:(id)arg1;
- (id)pl_shortDescription;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)prs_arrayAtIndex:(unsigned int)arg1;
- (id)prs_dictionaryAtIndex:(unsigned int)arg1;
- (id)prs_filterObjectsUsingBlock:(id)arg1;
- (id)prs_mapAndFilterObjectsUsingBlock:(id)arg1;
- (id)prs_mapObjectsUsingBlock:(id)arg1;
- (id)prs_numberAtIndex:(unsigned int)arg1;
- (id)prs_stringAtIndex:(unsigned int)arg1;
- (id)pu_localizedComposedStringThatFitsWidth:(float)arg1 withMeasuringLabel:(id)arg2;
- (id)pu_localizedComposedStringWithCount:(unsigned int)arg1;
- (id)rangeCheckedObjectAtIndex:(unsigned int)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;
- (id)repeatedNTimes:(int)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)safari_arrayAtIndex:(unsigned int)arg1;
- (id)safari_dictionaryAtIndex:(unsigned int)arg1;
- (id)safari_filterObjectsUsingBlock:(id)arg1;
- (id)safari_mapAndFilterObjectsUsingBlock:(id)arg1;
- (id)safari_mapObjectsUsingBlock:(id)arg1;
- (id)safari_numberAtIndex:(unsigned int)arg1;
- (id)safari_stringAtIndex:(unsigned int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)shortDescription;
- (id)shortDescription;
- (id)shortDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2;
- (id)shortDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (id)sortedArrayHint;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)specifierForID:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)subarraysOfSize:(unsigned int)arg1;
- (id)tsch_initTSCHChartGridValuesArrayWithProtobufGridRowArray:(const struct RepeatedPtrField<TSCH::GridRow> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsch_initTSCHChartGridValuesWithProtobufGridRow:(const struct GridRow { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::GridValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (void)tsch_saveTSCHChartGridValuesArrayToProtobufGridRowArray:(struct RepeatedPtrField<TSCH::GridRow> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsch_saveTSCHChartGridValuesToProtobufGridRow:(struct GridRow { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::GridValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)tsd_initWithExteriorTextWrapArray:(const struct RepeatedPtrField<TSD::ExteriorTextWrapArchive> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsd_initWithGeometryArray:(const struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsd_saveToExteriorTextWrapArray:(struct RepeatedPtrField<TSD::ExteriorTextWrapArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)tsd_saveToGeometryArray:(struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)tsp_initWithColorArray:(const struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithNSRangeArray:(const struct RepeatedPtrField<TSP::Range> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithProtobufStringArray:(const struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithProtobufUUIDArray:(const struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithUInt32Array:(const struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (void)tsp_saveToColorArray:(struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToNSRangeArray:(struct RepeatedPtrField<TSP::Range> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToProtobufStringArray:(struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToProtobufUUIDArray:(struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToUInt32Array:(struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (int)tss_propertyAtIndex:(unsigned int)arg1;
- (id)tsu_anyObject;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(id)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id)arg1;
- (id)tsu_firstObjectPassingTest:(id)arg1;
- (unsigned int)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_initWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
- (id)tsu_initWithInts:(int*)arg1 count:(unsigned int)arg2;
- (id)tsu_initWithUIntegers:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_onlyObject;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned int)arg1;
- (id)tsu_uniqueObjects;
- (id)uniqueObjects;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;

@end
