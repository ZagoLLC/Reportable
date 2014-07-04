//
//  SMTag.h

//  Reportable
//
//  Created by Dinesh Patil on 11/5/12.
//  Copyright (c) 2012 Codewalla Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SMTag : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) double type;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) NSDate *dateTaken;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSString *copyright;
@property (nonatomic, assign) BOOL uploadStatus;
@end
