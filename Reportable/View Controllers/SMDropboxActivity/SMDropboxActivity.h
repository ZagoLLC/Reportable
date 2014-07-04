//
//  SMDropboxActivity.h

//  Reportable
//
//  Created by Suraj Jadhav on 20/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SMDropboxActivity;

@protocol SMDropboxActivityDelegate <NSObject>

-(void)delegatedDropboxActivitySelected;

@end
@interface SMDropboxActivity : UIActivity
@property (nonatomic,weak) id <SMDropboxActivityDelegate> delegate;
@end
