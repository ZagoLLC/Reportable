//
//  SMDropboxComponent.m

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import "SMDropboxComponent.h"

static SMDropboxComponent *sharedComponent = nil;
@implementation SMDropboxComponent

@synthesize restClient;

+ (SMDropboxComponent*)sharedComponent
{
    if (sharedComponent == nil)
    {
        sharedComponent = [[super alloc] init];

    }
    return sharedComponent;
}

-(BOOL)shouldAutorotate{
    return NO;
}

- (id)init
{
    if( self = [super init] )
    {
        self.restClient = [[DBRestClient alloc] initWithSession:[DBSession sharedSession]];
        self.restClient.delegate = self;
    }
    
    return self;
}


@end
