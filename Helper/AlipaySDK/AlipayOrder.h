//
//  AlipayOrder.h
//  EPF
//
//  Created by zhucuirong on 15/12/21.
//  Copyright © 2015年 SINOFAKE SINEP. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlipayOrder : NSObject

/**
 *  合作者身份ID: 签约的支付宝账号对应的支付宝唯一用户号。以2088开头的16位纯数字组成。
 */
@property (nonatomic, copy) NSString *partner;
/**
 *  卖家支付宝账号: 卖家支付宝账号（邮箱或手机号码格式）或其对应的支付宝唯一用户号（以2088开头的纯16位数字）。
 */
@property (nonatomic, copy) NSString *seller;
/**
 *  商品名称: 商品的标题/交易标题/订单标题/订单关键字等。该参数最长为128个汉字。
 */
@property (nonatomic, copy) NSString *productName;
/**
 *  商品详情: 对一笔交易的具体描述信息。如果是多种商品，请将商品描述字符串累加传给body。
 */
@property (nonatomic, copy) NSString *productDescription;
/**
 *  总金额: 该笔订单的资金总额，单位为RMB-Yuan。取值范围为[0.01，100000000.00]，精确到小数点后两位
 */
@property (nonatomic, copy) NSString *amount;
/**
 *  服务器异步通知页面路径: 支付宝服务器主动通知商户网站里指定的页面http路径。
 */
@property (nonatomic, copy) NSString *notifyURL;
/**
 *  商户网站唯一订单号: 支付宝合作商户网站唯一订单号。
 */
@property (nonatomic, copy) NSString *tradeNO;
/**
 *  获取私钥并将商户信息签名,外部商户可以根据情况存放私钥和签名,只需要遵循RSA签名规范,并将签名字符串base64编码和UrlEncode
 */
//@property (nonatomic, copy) NSString *sign;


///////////////////////////////////////////////////////////////
/////////////////有默认值参数，外部可不赋值//////////////////////
///////////////////////////////////////////////////////////////
/**
 *  接口名称，固定值。 default: mobile.securitypay.pay
 */
@property (nonatomic, copy) NSString *service;
/**
 *  支付类型。默认值为：1（商品购买）。 default:1
 */
@property (nonatomic, copy) NSString *paymentType;
/**
 *  商户网站使用的编码格式，固定为utf-8。 default:utf-8
 */
@property (nonatomic, copy) NSString *inputCharset;
/**
 *  未付款交易的超时时间: 设置未付款交易的超时时间，一旦超时，该笔交易就会自动被关闭。当用户输入支付密码、点击确认付款后（即创建支付宝交易后）开始计时。取值范围：1m～15d，或者使用绝对时间（示例格式：2014-06-13 16:00:00）。m-分钟，h-小时，d-天，1c-当天（1c-当天的情况下，无论交易何时创建，都在0点关闭）。该参数数值不接受小数点，如1.5h，可转换为90m。 default:30m
 */
@property (nonatomic, copy) NSString *itBPay;
/**
 *  default:m.alipay.com
 */
//@property (nonatomic, copy) NSString *showUrl;//在官网上没有找到对应的字段"show_url"



///////////////////////////////////////////////////////////////
/////////////////无默认值参数，外部也可不赋值////////////////////////
///////////////////////////////////////////////////////////////
/**
 *  客户端号: 标识客户端,  eg:external
 */
@property (nonatomic, copy) NSString * appID;
/**
 *  客户端来源: 标识客户端来源。参数值内容约定如下：appenv=”system=客户端平台名^version=业务系统版本”, appenv=”system=android^version=3.0.1.2”
 */
@property (nonatomic, copy) NSString *appenv;

/**
 goods_type: 商品类型  具体区分本地交易的商品类型。
 1：实物交易；
 0：虚拟交易。
 默认为1（实物交易）。
 
 rn_check: 是否发起实名校验  
 T：发起实名校验；
 F：不发起实名校验。
 
 extern_token: 	授权令牌
 开放平台返回的包含账户信息的token（授权令牌，商户在一定时间内对支付宝某些服务的访问权限）。通过授权登录后获取的alipay_open_id，作为该参数的value，登录授权账户即会为支付账户。(1b258b84ed2faf3e88b4d979ed9fd4db)
 */



/**
 *  out_context: 商户业务扩展参数
 业务扩展参数，支付宝特定的业务需要添加该字段，json格式。 商户接入时和支付宝协商确定。
 ({“ccode”:“shanghai”,“no”:“2014052600006128”})
 */
//@property (nonatomic, copy) NSDictionary * extraParams;

@end
