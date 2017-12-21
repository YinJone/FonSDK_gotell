//
//  FonSDKDelegate.h
//  FonSDK
//
//  Created by Alejandro Espinosa on 8/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

@import Foundation;
#import "FNCredentials.h"

/**
 Delegate of the FonSDK class.
 */
@protocol FonSDKDelegate <NSObject>

/**
 Credentials with the data to generate the networks that it can connect.
 
 @return Credentials with the data to generate the networks that it can connect.
 */
- (FNCredentials *)credentials;

@end
