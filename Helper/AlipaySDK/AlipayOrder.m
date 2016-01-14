//
//  AlipayOrder.m
//  EPF
//
//  Created by zhucuirong on 15/12/21.
//  Copyright © 2015年 SINOFAKE SINEP. All rights reserved.
//

#import "AlipayOrder.h"

@implementation AlipayOrder

- (NSString *)description {
    NSMutableString *orderDescription = [NSMutableString string];
    
    [orderDescription appendFormat:@"partner=\"%@\"", self.partner];
    [orderDescription appendFormat:@"&seller_id=\"%@\"", self.seller];
    [orderDescription appendFormat:@"&out_trade_no=\"%@\"", self.tradeNO];
    [orderDescription appendFormat:@"&subject=\"%@\"", self.productName];
    [orderDescription appendFormat:@"&body=\"%@\"", self.productDescription];
    [orderDescription appendFormat:@"&total_fee=\"%@\"", self.amount];
    [orderDescription appendFormat:@"&notify_url=\"%@\"", self.notifyURL];
    
    [orderDescription appendFormat:@"&service=\"%@\"", (self.service ?: @"mobile.securitypay.pay")];
    [orderDescription appendFormat:@"&payment_type=\"%@\"", (self.paymentType ?: @"1")];
    [orderDescription appendFormat:@"&_input_charset=\"%@\"", (self.inputCharset ?: @"utf-8")];
    [orderDescription appendFormat:@"&it_b_pay=\"%@\"", (self.itBPay ?: @"30m")];
//    if (self.showUrl) {
//        [orderDescription appendFormat:@"&show_url=\"%@\"", self.showUrl];
//    }
    
    if (self.appID) {
        [orderDescription appendFormat:@"&app_id=\"%@\"", self.appID];
    }
    if (self.appenv) {
        [orderDescription appendFormat:@"&appenv=\"%@\"", self.appenv];
    }
    
    //[orderDescription appendFormat:@"&sign=\"%@\"&sign_type=\"%@\"", self.sign, @"RSA"];

    return orderDescription;
}

@end
