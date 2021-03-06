/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PKRegion : NSObject <NSCoding, NSCopying> {

  /* Error parsing encoded ivar type info: {vec4="v"} */
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    } _halfExtent;


  /* Error parsing encoded ivar type info: {vec4="v"} */
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    } _halfExtent2;

    bool _isExclusive;
    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _path;
    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _path2;
    int _regionOp;
    int _shape;
    int _shape2;
}

@property(readonly) struct CGPath { }* path;

+ (id)infiniteRegion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)containsPoints:(const float*)arg1 locationStride:(int)arg2 results:(char *)arg3 resultsStride:(int)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;
- (id)initWithRadius:(float)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)inverseRegion;
- (struct CGPath { }*)path;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
