/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, UIImage;



@interface GKLoadImageRequest : GKDataRequest 
{
    NSURL *_url;
    UIImage *_image;
}

@property(retain) UIImage *image;
@property(retain) NSURL *url;


- (id)cacheKey;
- (id)request;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)header;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (NSInteger)cacheType;
- (id)errorForResponse:(id)arg1;
- (NSInteger)cachePriority;
- (id)demarshalResponseData:(id)arg1;

@end