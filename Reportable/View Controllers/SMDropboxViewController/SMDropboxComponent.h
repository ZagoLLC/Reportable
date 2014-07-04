//
//  SMDropboxComponent.h

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DropboxSDK/DropboxSDK.h>
@interface SMDropboxComponent : NSObject <DBRestClientDelegate>
+ (SMDropboxComponent*)sharedComponent;
@property (nonatomic, strong) DBRestClient *restClient;
@end
