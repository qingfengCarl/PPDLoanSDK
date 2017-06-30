//
//  LoansSDK.h
//  LoansSDK 1.6.9版本
//
//  Created by qingfengwolf on 16/3/28.
//  Copyright © 2016年 ppdai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface LoansSDK : NSObject

@property (nonatomic, assign)float loanAutoSizeScaleX;
@property (nonatomic, assign)float loanAutoSizeScaleY;
@property (strong, nonatomic) UIWindow *loanWindow;
@property (nonatomic, strong) UINavigationController *loanNav;
@property (nonatomic, strong) UITabBarController *sdkTabbarcontroller;
@property (nonatomic, strong) NSString *userState;
@property (nonatomic, strong) NSString *comingAppID;
@property (nonatomic, strong) NSString *comingKey;
@property (nonnull, strong) NSString *ppdRegisterImage;
@property (nonatomic, assign) BOOL inSDK;

/**
 *
 *当前查询借款状态收取通知的 key 字符串
 */
@property (nonatomic, readonly) NSString *currentLoanNoticeString;

/**
 *合作注册页图片，默认不用传
 *进入的渠道入口，比如金融入口、banner点入等等，与ppdai协商定
 */
@property (nonatomic, strong) NSString *comingType;

/**
 * App可从外部传入当前用户的姓各、身份证号到sdk，可减少该用户在sdk重新输入，有效提高转化率
 * ppdRealName为姓名，ppdCardID为身份证号
 * ppdCardUrl为身份证正面照片，ppdFaceUrl为手持身份证自拍照，ppdEmail为邮箱
 */
@property (nonatomic, strong) NSString *ppdRealName;
@property (nonatomic, strong) NSString *ppdCardID;
@property (nonatomic, strong) NSString *ppdCardUrl;
@property (nonatomic, strong) NSString *ppdFaceUrl;
@property (nonatomic, strong) NSString *ppdEmail;
+ (LoansSDK *)instance;

/**初始化sdk
 * 调用此方法需传入应用申请的Appid,服务端公钥，客户端私钥
 * appid为每个应用在拍拍贷对应的唯一标识，pubkey为服务端公钥，prikey为客户端私钥
 */
+(void)loadPPDLoanSDKInit:(NSString *)appid publicKey:(NSString *)pubkey privateKey:(NSString *)prikey;


/**进入loan  sdk
 * 调用此方法可以进入sdk
 * phoneNum为带进来的手机号，可以为nil, thisC为当前页面UIViewController
 */
+(void)showLoanSdkView:(NSString *)phoneNum withController:(UIViewController *)thisC;


/**清除账户信息
 * 调用此方法可以清除当前用户的sdk中个人信息
 * 一般在APP切换账户时调用
 */
+(void)logoutAndCleanLoanSDK;


/**推送进入sdk调用方法
 * 有推送合作的应用在额度评估成功的推送
 * 一般在APP收到sdk相关推送在推送进入调用该方法
 */
+(void)showLoanPushView;


/**获取当前登录用户借款状态
 * 调用此方法的同时或在此之前，请初始化一个通知:key为“GETPPDLoanStatus”
 * 我们sdk中在收到此方法后会查询用户借款状态，查到后会以通知的形式发出来，请注意接收通知
 */
+(void)getPPDLoanStatusList;


/**开发模式调用 －－－－－－服务端公钥－－－－－－--------------------------------------------
 *开发模式下调该方法验证一下 服务端公钥 是否正确！
*/
+(void)verfyThePPDaiPublickey;




//*****************分割线***************
+(void)logoutLoanSdkView;
+(void)successLogin;
+(void)showLoginView;
+(UIViewController *)currentViewController;

NS_ASSUME_NONNULL_END
@end
