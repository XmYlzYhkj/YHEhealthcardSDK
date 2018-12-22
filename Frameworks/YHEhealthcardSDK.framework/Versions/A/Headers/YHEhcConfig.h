//
//  YHEhcConfig.h
//  YHEhcSDK
//
//  Created by jagtu on 2018/12/04.
//
#import <Foundation/Foundation.h>

@interface YHEhcConfig : NSObject

/**
 * 应用appId
 */
@property(nonatomic,copy)NSString *appId;

/**
 * 应用密钥
 */
@property(nonatomic,copy)NSString *appSecret;


/**
 * 服务端地址，请务必设置
 */
@property(nonatomic,copy)NSString *platformHost;


/**
 *  商户APP的回调URL Schemes，请务必设置
 *  默认值为[[NSBundle mainBundle] bundleIdentifier]
 */
@property(nonatomic,copy)NSString *appScheme;


/**
 *  创建单例
 *
 *  @return 返回单例对象
 */
+ (instancetype)shareInstance;

/**
 *  创建单例
 @param appId 应用ID与应用的bundleIdentifier对应
 @param appSecret 应用密钥
 @param platformHost 平台地址
 */
+(instancetype)initWithAppId:(NSString *)appId
                   appSecret:(NSString *)appSecret
                platformHost:(NSString *)platformHost;


@end
