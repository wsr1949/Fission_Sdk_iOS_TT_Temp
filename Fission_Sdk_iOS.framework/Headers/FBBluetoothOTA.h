//
//  FBBluetoothOTA.h
//  FissionBluetooth
//
//  Created by 裂变智能 on 2021/3/12.
//

#import <Foundation/Foundation.h>

@class FBProgressModel;

NS_ASSUME_NONNULL_BEGIN

/**
 FB蓝牙OTA管理器 | FB Bluetooth OTA Manager
*/
@interface FBBluetoothOTA : NSObject

/**
 初始化单个实例对象 |  Initializes a single instance object
 */
+ (FBBluetoothOTA *)sharedInstance;


/** OTA升级响应超时（单位秒），至少30，默认30，部分OTA可能会多次重启设备，可能需要将此值设置大一些｜OTA upgrade response timeout (in seconds), at least 30, default 30, some OTAs may restart the device multiple times, you may need to set this value larger  */
@property (nonatomic, assign) uint8_t sendTimerOut;

/** OTA升级是否检查电量，电量应不低于30%，默认YES｜Whether the OTA upgrade checks the power, the power should not be less than 30%, and the default is yes */
@property (nonatomic, assign) BOOL isCheckPower;

/** 指示升级文件是否重新排序，YES重新排序，NO使用原厂默认排序，默认YES重新排序｜Indicates whether to reorder the upgrade files, YES to reorder, NO to use the original factory default sort, default YES to reorder */
@property (nonatomic, assign) BOOL hasReorderedFiles;

/**
 OTA升级｜OTA upgrade
 @param binFile                                 bin文件｜Bin file
 @param OTAType                                 OTA类型｜OTA type
 
 @note 传入的bin文件数据需满足以下条件之一｜The incoming bin file data needs to meet one of the following conditions
 ①. Realtek Tool生成的单个bin的MP格式文件｜1. MP format file of single bin generated by Realtek tool
 ②. Realtek Pack Tool（Windows）打包生成的包含多个bin的打包文件｜2. Package file with multiple bin generated by Realtek pack tool (Windows)
 ③. 旧版本实现的纯bin文件（不推荐）｜3. Pure bin file implemented in old version (not recommended)
 
 ④. 自定义表盘bin文件的生成，可使用 FBCustomDataTools 类中的生成方法 fbGenerateCustomDialBinFileDataWithDialModel:｜To generate a custom dial bin file, you can use the generation method fbGenerateCustomDialBinFileDataWithDialModel in the FBCustomDataTools class:
 
 ⑤. 多运动类型压缩bin文件的生成，可使用 FBCustomDataTools 类中的生成方法 fbGenerateMultiProjectCustomDialBinFileDataWithDialsModel:｜To generate multi-motion type compressed bin files, you can use the generation method fbGenerateMultiProjectCustomDialBinFileDataWithDialsModel in the FBCustomDataTools class:
 
 ⑥. 如果FBFirmwareVersionObject.firmwareConfig.chipManufacturer == FB_CHIPMANUFACTURERTYPE_HISI(海思芯片)，无论什么bin文件类型，都需要合成添加一个文件信息，可使用 FBCustomDataTools 类中的生成方法 createFileName:withFileData:withOTAType:｜If FBFirmwareVersionObject.firmwareConfig.chipManufacturer == FB_CHIPMANUFACTURERTYPE_HISI (Hisilicon chip), no matter what bin file type, a file information needs to be added synthetically. You can use the generation method createFileName:withFileData:withOTAType: in the FBCustomDataTools class:
*/
- (void)fbStartCheckingOTAWithBinFileData:(NSData * _Nonnull)binFile withOTAType:(FB_OTANOTIFICATION)OTAType withBlock:(FBSetOtaUpgradeManagerBlock _Nonnull)fbBlock;

@end

NS_ASSUME_NONNULL_END
