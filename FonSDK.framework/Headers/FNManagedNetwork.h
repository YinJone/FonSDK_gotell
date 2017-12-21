//
//  FNManagedNetwork.h
//  FonSDK
//
//  Created by Alejandro Espinosa on 22/6/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 The type of managed network.
 */
typedef NS_ENUM(NSUInteger, FNManagedNetworkType){
    /**
     The network is not managed.
     */
    FNManagedNetworkTypeNone = 0,
    /**
     The network is captive.
     */
    FNManagedNetworkTypeCaptive,
    /**
     The network is EAP.
     */
    FNManagedNetworkTypeEAP,
    /**
     The network is WPA.
     */
    FNManagedNetworkTypeWPA
};

@interface FNManagedNetwork : NSObject

/** FPRManagedNetworkType with the type of network. */
@property (assign, nonatomic) FNManagedNetworkType managedNetworkType;

/** NSString with the BSSID. */
@property (copy, nonatomic) NSString *BSSID;

/** NSString with the SSID. */
@property (copy, nonatomic) NSString *SSID;

/** NSString with the information needed to check if the network is secure. */
@property (copy, nonatomic) NSString *fqdn;

/** NSString with password of WPA network. */
@property (copy, nonatomic) NSString *password;

@end
