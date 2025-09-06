//
//  Copyright © 2017 IronSource. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface ISSupersonicAdsConfiguration : NSObject

@property(nonatomic, strong) NSNumber *useClientSideCallbacks DEPRECATED_MSG_ATTRIBUTE(
    "This property is deprecated and will be removed in version 9.0.0.");
@property(nonatomic, strong) NSString *language;
@property(nonatomic, strong) NSString *minimumOfferCommission;
@property(nonatomic, strong) NSDictionary *controllerConfig;
@property(nonatomic, strong) NSString *itemName;
@property(nonatomic, strong) NSString *controllerUrl;
@property(strong) NSNumber *itemCount;
@property(strong) NSNumber *maxVideoLength;
@property(nonatomic, strong) NSString *privateKey;
@property(nonatomic) BOOL debugMode;
@property(nonatomic) NSInteger debugLevel;

+ (ISSupersonicAdsConfiguration *)configurations;

@end
