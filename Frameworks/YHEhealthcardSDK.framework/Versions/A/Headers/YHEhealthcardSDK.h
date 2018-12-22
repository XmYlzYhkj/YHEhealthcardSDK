//
//  YHEhealthcardSDK.h
//  YHEhealthcardSDK
//
//  Created by Jagtu on 2018/12/5.
//
//  #import <YHEhealthcardSDK/YHEhealthcardSDK.h>
#import <Foundation/Foundation.h>
#import <YHEhealthcardSDK/YHEhcColor.h>
#import <YHEhealthcardSDK/YHEhcConfig.h>
#import <YHEhealthcardSDK/YHEhcConstant.h>


NS_ASSUME_NONNULL_BEGIN

@interface YHEhealthcardSDK : NSObject

/**
 * 展示电子健康卡
 * @param userInfo {@"mobilePhone":@"手机号码",@"userName":@"姓名",@"idNo":@"证件号码",@"idType":@"证件类型,01为身份证",@"extUserId":@"商户系统的用户唯一标识",@"ehcId":@"电子健康卡ID"}
 */
+(void)showWithInfo:(NSDictionary *)userInfo;

@end

NS_ASSUME_NONNULL_END
