//
//  SMLocationTracker.h
//  HelpBridge
//
//  Created by Dinesh Patil on 31/07/12.
//  Copyright (c) 2012 Icertis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SMLocationTracker : NSObject<CLLocationManagerDelegate>

@property(nonatomic, readonly) CLLocation *currentLocation;
@property(nonatomic, readonly) NSString *address;

- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;

+ (SMLocationTracker*)sharedManager;


@end
