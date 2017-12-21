//
//  FNCredentials.h
//  FonSDK
//
//  Created by Alejandro Espinosa on 8/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 A model class with the data to generate the networks that it can connect.
 */
@interface FNCredentials : NSObject

/**
 Username of the user used to generate the networks that it can connect. It should be unique.
 */
@property (copy, nonatomic) NSString *username;

/**
 Password of the user used to generate the networks that it can connect.
 */
@property (copy, nonatomic) NSString *password;

/**
 Name of the home service provider.
 */
@property (copy, nonatomic) NSString *hsp;

- (instancetype)initWithUsername:(NSString *)username password:(NSString *)password hsp:(NSString *)hsp;

@end
