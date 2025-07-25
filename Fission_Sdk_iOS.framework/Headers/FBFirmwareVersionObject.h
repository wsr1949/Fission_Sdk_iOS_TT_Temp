//
//  FBFirmwareVersionObject.h
//  FissionBluetooth
//
//  Created by 裂变智能 on 2022/2/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 设备信息配置类｜Device information configuration class
*/
@interface FBFirmwareVersionObject : NSObject <NSCoding, NSSecureCoding>

/**
 最后一次更新时间，非0表示以下数据值有效 | Last update time, non-zero indicates that the following data values are valid
*/
@property (nonatomic, assign) NSInteger updateUTC;

/**
 结构体版本 | Structure version
*/
@property (nonatomic, assign) NSInteger structVersion;

/**
 芯片厂商｜Chip manufacturer
 */
@property (nonatomic, assign) FB_CHIPMANUFACTURERTYPE chipManufacturer;

/**
 硬件标志 | Hardware logo
*/
@property (nonatomic, copy) NSString *hardwareIdentifier;

/**
 mac 地址 | MAC address
*/
@property (nonatomic, copy) NSString *mac;

/**
 硬件版本 | Hardware version
*/
@property (nonatomic, copy) NSString *hardWareVersion;

/**
 固件版本 | Firmware version
*/
@property (nonatomic, copy) NSString *firmwareVersion;

/**
 UI版本 | UI version
*/
@property (nonatomic, copy) NSString *UI_Version;

/**
 协议版本 | Protocol version
*/
@property (nonatomic, copy) NSString *protocolVeriosn;

/**
 设备名称 | Equipment name
*/
@property (nonatomic, copy) NSString *deviceName;

/**
 设备ID | Device ID
*/
@property (nonatomic, assign) NSInteger deviceID;

/**
 设备SN号 | Equipment Sn number
*/
@property (nonatomic, copy) NSString *deviceSN;

/**
 设备IMEI号
 */
@property (nonatomic, copy) NSString *deviceIMEI;

/**
 固件更新日期 | Firmware update date
*/
@property (nonatomic, copy) NSString *firmwareUpdateTime;

/**
 适配号 | Matching number
*/
@property (nonatomic, copy) NSString *fitNumber;

/**
 二维码信息 | QR code information
*/
@property (nonatomic, assign) NSInteger QR_code;

/**
 MAC二维码版本 | Mac QR code version
*/
@property (nonatomic, assign) NSInteger Mac_QR_code_version;

/**
 显示屏型号 | Display model
*/
@property (nonatomic, assign) NSInteger display_model;

/**
 TP型号 | TP model
*/
@property (nonatomic, assign) NSInteger TP_model;

/**
 手表表盘形状 | Watch dial shape
 
 @note  shape           手表表盘形状，0:长方形、1:圆形、2:正方形｜Watch dial shape, 0: rectangle, 1: circle, 2: Square
*/
@property (nonatomic, assign) NSInteger shape;

/**
 手表显示分辨率宽｜Wide display resolution of watch
 */
@property (nonatomic, assign) NSInteger watchDisplayWide;

/**
 手表显示分辨率高｜The watch has high display resolution
 */
@property (nonatomic, assign) NSInteger watchDisplayHigh;

/**
 手表显示圆角｜Watch display rounded corners
 */
@property (nonatomic, assign) NSInteger watchDisplayRadius;

/**
 表盘缩略图显示分辨率宽｜The display resolution of dial thumbnail is wide
 */
@property (nonatomic, assign) NSInteger dialThumbnailDisplayWide;

/**
 表盘缩略图显示分辨率高｜Dial thumbnail display with high resolution
 */
@property (nonatomic, assign) NSInteger dialThumbnailDisplayHigh;

/**
 表盘缩略图显示圆角｜Watch face thumbnails display rounded corners
 */
@property (nonatomic, assign) NSInteger dialThumbnailDisplayRadius;

/**
 音频库版本｜Audio library version
 */
@property (nonatomic, copy) NSString *audioTimeVersion;

/**
 适配号，长整形（部分手表支持）｜Adaptation number
 */
@property (nonatomic, assign) NSInteger adaptNumber;

/**
 Hardfault信息空间地址｜Hardfault information space address
 */
@property (nonatomic, assign) NSInteger hardfaultAddress;

/**
 Hardfault信息空间尺寸｜Hardfault information space size
 */
@property (nonatomic, assign) NSInteger hardfaultSize;

/**
 系统参数空间地址｜System parameter space address
 */
@property (nonatomic, assign) NSInteger systemAddress;

/**
 系统参数空间尺寸｜System parameter space size
 */
@property (nonatomic, assign) NSInteger systemSize;

/**
 nandFlashID
 */
@property (nonatomic, assign) NSInteger nandFlashID;

/**
 norFlashID
 */
@property (nonatomic, assign) NSInteger norFlashID;


/**
 🌟是否需要使用时区补偿时间｜Need to use time zone to compensate time🌟
 
 @note  NO：不使用时区（时区需设定为0），时区直接补偿到UTC中，所以记录时间戳实际采用RTC记录（RTC = UTC + 时区偏移秒）、YES：使用时区（时区需要正确设定），所有记录时间戳采用UTC记录｜NO: do not use the time zone (the time zone needs to be set to 0), and the time zone is directly compensated to UTC, so the recording timestamp actually adopts RTC recording (RTC = UTC + time zone offset second). YES: use the time zone (the time zone needs to be set correctly), and all recording timestamps adopt UTC recording
*/
@property (nonatomic, assign) BOOL useTimeZone;

/**
 🌟是否需要使用压缩算法（表盘）｜Need to use compression algorithm (DIAL)🌟
 
 @note  NO：使用普通算法、YES：使用压缩算法｜NO: use ordinary algorithm, YES: use compression algorithm
*/
@property (nonatomic, assign) BOOL useCompress;

/**
 🌟是否支持来电快捷回复｜Does it support quick reply to incoming calls🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportQuickReply;

/**
 🌟是否支持GPS互联｜Whether GPS interconnection is supported🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportGPS;

/**
 🌟是否支持未来14天天气预报（与旧版相比，旧版本只支持未来5天天气预报）｜Does it support the weather forecast for the next 14 days (compared with the old version, the old version only supports the weather forecast for the next 5 days)🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_14days_Weather;

/**
 🌟是否支持更多种运动推送｜Does it support more sports push🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMoreSports;

/**
 🌟是否支持更多天气类型（与旧版相比，增加「中雨、暴雨」）｜Whether more weather types are supported (compared with the old version, add "moderate rain, rainstorm")🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMoreWeather;

/**
 🌟是否支持同步常用联系人｜Support to synchronize favorite contacts🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportFavContacts;

/**
 🌟支持同步常用联系人个数｜Support to synchronize favorite contacts count🌟
 */
@property (nonatomic, assign) NSInteger favContactsCount;

/**
 🌟是否支持运动心率预警｜Whether it supports exercise heart rate warning🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportHrWarning;

/**
 🌟是否支持运动目标设置｜Whether the setting of moving targets is supported🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSportTarget;

/**
 🌟是否支持勿扰设置｜Whether the do not disturb setting is supported🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportNotDisturb;

/**
 🌟是否支持密钥绑定｜Whether key binding is supported🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportBinding;

/**
 🌟是否支持使用私有协议推送在线表盘｜Whether it supports using private protocol to push online dial🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportPrivatePushDial;

/**
 🌟是否支持抬腕亮屏信息设置｜Whether it supports the setting of wrist lifting and bright screen information🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportWristScreen;

/**
 🌟是否支持通话｜Whether calls are supported🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportCalls;

/**
 🌟是否支持APP设置 记事提醒/闹钟｜Does the app support setting reminders / alarm clocks🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSetAlarmClock;

/**
 🌟是否支持 记事提醒/闹钟 显示备注｜Whether it supports memo reminder / alarm clock display remarks🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportDisplayRemarks;

/**
 🌟记事提醒/闹钟 最大支持个数｜Note reminder/alarm clock maximum supported number🌟
 
 @note  仅当上方参数 supportSetAlarmClock 为 true 时，此值才有效
*/
@property (nonatomic, assign) int alarmMaximumCount;

/**
 🌟是否支持OTA进度反馈（固件/表盘/运动下载等）｜Whether OTA progress feedback is supported (firmware / dial / sports download, etc.)🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_ota_progress;

/**
 🌟是否支持音频和通话开关设置和获取｜Whether to support audio and call switch setting and acquisition🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_audio_call_switch;

/**
 🌟是否支持心率血氧精神压力开关设置｜Whether to support heart rate blood oxygen mental pressure switch setting🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_hr_spo2_stress_switch;

/**
 🌟是否支持血压功能｜Whether to support blood pressure function🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportBloodPressure;

/**
 🌟是否支持精神压力功能｜Whether to support mental stress function🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMentalStress;

/**
 🌟是否支持一次性推送多种运动模式｜Does it support multiple sports modes at one time🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMultipleSports;

/**
 🌟支持一次性推送多种运动模式的个数，0不支持｜Support one-time push of the number of multiple sports modes, 0 does not support🌟
 
 @note  与上述参数 supportMultipleSports 配合使用｜Used in conjunction with the above parameter supportMultipleSports
*/
@property (nonatomic, assign) NSInteger supportMultipleSportsCount;

/**
 🌟是否支持日常心率检测开关控制｜Whether to support daily heart rate detection switch control🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportHeartRateControl;

/**
 🌟是否支持日常血氧检测开关控制｜Whether to support daily blood oxygen detection switch control🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportBloodOxygenControl;

/**
 🌟是否支持日常血压检测开关控制｜Whether to support daily blood pressure detection switch control🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportBloodPressureControl;

/**
 🌟是否支持日常精神压力检测开关控制｜Whether to support daily mental stress detection switch control🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMentalStressControl;

/**
 🌟是否支持系统功能开关的设定和获取大数据指令（0252H / 0352H）｜Whether to support the setting of the system function switch and the command of obtaining big data（0252H / 0352H）🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSetSystemFunctionSwitch;

/**
 🌟是否支持零星小睡｜Whether to support sporadic naps🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSporadicNaps;

/**
 🌟是否支持自定义表盘抗锯齿｜Whether to support custom dial anti-aliasing🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportAntiAliasing;

/**
 🌟是否支持带适配号验证的OTA通知指令｜Whether to support OTA notification command with adaptation number verification🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportAdaptNumberVerifyOTA;

/**
 🌟是否支持hardfault信息和系統参数读取｜Whether to support hardfault information and system parameter reading🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_hardfault_system_info;

/**
 🌟是否支持表盘CRC校验｜Whether to support dial CRC check🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL support_dial_CRC_check;

/**
 🌟是否支持静息心率｜Whether to support resting heart rate🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportRestingHeartRate;

/**
 🌟是否支持AGPS定位｜Whether to support AGPS positioning🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportAGPS;

/**
 🌟是否支持PATCH版本字段｜Whether to support PATCH version field🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportPatchVersion;

/**
 🌟是否支持日程功能｜Whether to support schedule function🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSchedule;

/**
 🌟是否支持紧急联系人设置｜Whether to support emergency contact settings🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportEmergencyContact;

/**
 🌟支持紧急联系人设置个数｜Support to synchronize emergency contacts count🌟
 */
@property (nonatomic, assign) NSInteger emergencyContactsCount;

/**
 🌟是否支持今日天气显示城市名称｜Whether to support today's weather display city name🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportWeatherCityName;

/**
 🌟是否支持JS应用｜Whether to support JS applications🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportJsApp;

/**
 🌟是否支持多媒体空间｜Whether to support multimedia space🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMultimediaSpace;

/**
 🌟是否支持视频表盘｜Whether to support video dial🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportVideoDial;

/**
 🌟是否支持设置铃声｜Whether to support setting ringtones🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportSetRingtone;

/**
 🌟支持消息提示铃声推送个数｜Supports the number of push notification ringtones🌟
 */
@property (nonatomic, assign) NSInteger messageRingtoneCount;

/**
 🌟支持来电铃声推送个数｜Number of ringtones supported🌟
 */
@property (nonatomic, assign) NSInteger callRingtoneCount;

/**
 🌟支持闹钟铃声推送个数｜Supported number of alarm ringtone pushes🌟
 */
@property (nonatomic, assign) NSInteger alarmRingtoneCount;

/**
 🌟是否支持读取系统日志｜Whether to support reading system logs🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportReadingSystemLog;

/**
 🌟是否支持星历文件合成包｜Whether to support ephemeris file synthesis package🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportEphemerisCompPackage;

/**
 🌟是否支持音量增益补偿｜Whether to support volume gain compensation🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportVolumeGainCompensation;

/**
 🌟是否支持JSI通道｜Whether to support JSI channel🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportJsiChannel;

/**
 🌟是否支持离线语音｜Whether to support offline voice🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportOfflineVoice;

/**
 🌟GOMORE授权码请求socID｜GOMORE authorization code request socID🌟
*/
@property (nonatomic, copy) NSString *socID;

/**
 🌟是否支持opus格式音频｜Whether to support opus format audio🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportOpus;

/**
 🌟是否支持会议纪要｜Whether to support meeting minutes🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMeeting;

/**
 🌟是否支持相册｜Whether to support photo album🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportPhotoAlbum;

/**
 🌟是否支持电子书｜Whether to support e-books🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportEbooks;

/**
 🌟是否支持音乐｜Whether to support music🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMusic;

/**
 🌟是否支持视频｜Whether to support video🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportVideo;

/**
 🌟是否支持游戏｜Whether to support games🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportGames;

/**
 🌟是否支持艾闪会议纪要二维码付款提示｜Support QR code payment reminder for AiShan meeting minutes🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportQR_AS_MTG;

/**
 🌟是否支持区分AI表盘和相册表盘｜Whether to support distinguish between AI watch faces and album watch faces🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportDiffDials;

/**
 🌟是否支持消息bit位扩充｜Whether to support message bit expansion🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportMsgBitExpansion;

/**
 🌟是否支持NFC｜Support NFC🌟
 
 @note  NO：不支持、YES：支持｜NO: not support YES: support
*/
@property (nonatomic, assign) BOOL supportNFC;


@end

NS_ASSUME_NONNULL_END
