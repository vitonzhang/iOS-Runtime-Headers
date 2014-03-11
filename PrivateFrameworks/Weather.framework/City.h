/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class <CityUpdaterDelegate>, NSDate, NSMutableArray, NSString, NSTimer;

@interface City : NSObject {
    BOOL _autoUpdate;
    NSTimer *_autoUpdateTimer;
    unsigned int _conditionCode;
    BOOL _dataCelsius;
    NSMutableArray *_dayForecasts;
    <CityUpdaterDelegate> *_delegate;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    NSMutableArray *_hourlyForecasts;
    float _humidity;
    BOOL _isHourlyDataCelsius;
    BOOL _isLocalWeatherCity;
    BOOL _isRequestedByFrameworkClient;
    BOOL _isUpdating;
    unsigned int _lastUpdateDetail;
    int _lastUpdateStatus;
    float _latitude;
    NSString *_link;
    NSString *_locationID;
    BOOL _lockedForDemoMode;
    float _longitude;
    unsigned int _moonPhase;
    NSString *_name;
    unsigned int _observationTime;
    float _pressure;
    int _pressureRising;
    int _secondsFromGMT;
    NSString *_state;
    unsigned int _sunriseTime;
    unsigned int _sunsetTime;
    NSString *_temperature;
    int _updateInterval;
    NSDate *_updateTime;
    NSString *_updateTimeString;
    float _visibility;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    NSString *_woeid;
}

@property(retain) NSTimer * autoUpdateTimer;
@property unsigned int conditionCode;
@property(getter=isDataCelsius) BOOL dataCelsius;
@property <CityUpdaterDelegate> * delegate;
@property float dewPoint;
@property float feelsLike;
@property float heatIndex;
@property float humidity;
@property BOOL isHourlyDataCelsius;
@property BOOL isLocalWeatherCity;
@property BOOL isRequestedByFrameworkClient;
@property BOOL isUpdating;
@property unsigned int lastUpdateDetail;
@property int lastUpdateStatus;
@property float latitude;
@property(copy) NSString * link;
@property(copy) NSString * locationID;
@property BOOL lockedForDemoMode;
@property float longitude;
@property unsigned int moonPhase;
@property(copy) NSString * name;
@property unsigned int observationTime;
@property float pressure;
@property int pressureRising;
@property int secondsFromGMT;
@property(copy) NSString * state;
@property unsigned int sunriseTime;
@property unsigned int sunsetTime;
@property(copy) NSString * temperature;
@property int updateInterval;
@property(retain) NSDate * updateTime;
@property float visibility;
@property float windChill;
@property float windDirection;
@property float windSpeed;
@property(copy) NSString * woeid;

+ (id)descriptionForWeatherUpdateDetail:(unsigned int)arg1;
+ (void)initialize;

- (void)_clearAutoUpdateTimer;
- (void)_generateLocalizableStrings;
- (BOOL)_isUpdating;
- (void)addDayForecast:(id)arg1;
- (void)addHourlyForecast:(id)arg1;
- (void)associateWithDelegate:(id)arg1;
- (id)autoUpdateTimer;
- (id)cityAndState;
- (void)clearForecasts;
- (unsigned int)conditionCode;
- (id)dayForecasts;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (float)dewPoint;
- (void)disassociateWithDelegate:(id)arg1;
- (id)displayName;
- (float)feelsLike;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned int)arg2;
- (float)heatIndex;
- (id)hourlyForecasts;
- (float)humidity;
- (id)init;
- (BOOL)isDataCelsius;
- (BOOL)isDay;
- (BOOL)isHourlyDataCelsius;
- (BOOL)isLocalWeatherCity;
- (BOOL)isRequestedByFrameworkClient;
- (BOOL)isUpdating;
- (BOOL)isUpdatingOrNoData;
- (unsigned int)lastUpdateDetail;
- (int)lastUpdateStatus;
- (float)latitude;
- (id)link;
- (void)localWeatherDidBeginUpdate;
- (id)locationID;
- (int)locationOfTime:(int)arg1;
- (BOOL)lockedForDemoMode;
- (float)longitude;
- (unsigned int)moonPhase;
- (id)name;
- (id)naturalLanguageDescription;
- (unsigned int)observationTime;
- (BOOL)populateWithDataFromCity:(id)arg1;
- (int)precipitationForecast;
- (float)pressure;
- (int)pressureRising;
- (int)primaryConditionForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)secondsFromGMT;
- (void)setAutoUpdate:(BOOL)arg1;
- (void)setAutoUpdateTimer:(id)arg1;
- (void)setConditionCode:(unsigned int)arg1;
- (void)setDataCelsius:(BOOL)arg1;
- (void)setDayForecasts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDewPoint:(float)arg1;
- (void)setFeelsLike:(float)arg1;
- (void)setHeatIndex:(float)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setHumidity:(float)arg1;
- (void)setIsHourlyDataCelsius:(BOOL)arg1;
- (void)setIsLocalWeatherCity:(BOOL)arg1;
- (void)setIsRequestedByFrameworkClient:(BOOL)arg1;
- (void)setIsUpdating:(BOOL)arg1;
- (void)setLastUpdateDetail:(unsigned int)arg1;
- (void)setLastUpdateStatus:(int)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLink:(id)arg1;
- (void)setLocationID:(id)arg1;
- (void)setLockedForDemoMode:(BOOL)arg1;
- (void)setLongitude:(float)arg1;
- (void)setMoonPhase:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setObservationTime:(unsigned int)arg1;
- (void)setPressure:(float)arg1;
- (void)setPressureRising:(int)arg1;
- (void)setSecondsFromGMT:(int)arg1;
- (void)setState:(id)arg1;
- (void)setSunriseTime:(unsigned int)arg1;
- (void)setSunsetTime:(unsigned int)arg1;
- (void)setTemperature:(id)arg1;
- (void)setUpdateInterval:(int)arg1;
- (void)setUpdateTime:(id)arg1;
- (void)setVisibility:(float)arg1;
- (void)setWindChill:(float)arg1;
- (void)setWindDirection:(float)arg1;
- (void)setWindSpeed:(float)arg1;
- (void)setWoeid:(id)arg1;
- (id)state;
- (unsigned int)sunriseTime;
- (unsigned int)sunsetTime;
- (id)temperature;
- (int)timeDigit;
- (void)update;
- (int)updateInterval;
- (id)updateTime;
- (id)updateTimeString;
- (float)visibility;
- (int)weatherDataAge;
- (float)windChill;
- (float)windDirection;
- (id)windDirectionAsString:(float)arg1;
- (float)windSpeed;
- (id)woeid;

@end