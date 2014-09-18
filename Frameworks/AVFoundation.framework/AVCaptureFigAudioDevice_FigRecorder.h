/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice_FigRecorder : AVCaptureDevice_FigRecorder {
    struct OpaqueCMClock { } *_deviceClock;
    NSDictionary *_deviceProperties;
    NSString *_localizedName;
    bool_isConnected;
    bool_levelMeteringEnabled;
}

+ (id)_devices;

- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)devicePropertiesDictionary;
- (bool)hasMediaType:(id)arg1;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (bool)isConnected;
- (bool)isInUseByAnotherApplication;
- (bool)isKindOfClass:(Class)arg1;
- (id)localizedName;
- (id)modelID;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (id)uniqueID;

@end