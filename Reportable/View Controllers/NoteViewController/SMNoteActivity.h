//
//  SMNoteActivity.h

//  Reportable
//
//  Created by Suraj Jadhav on 1/4/13.
//  Copyright (c) 2013 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SMNoteActivityDelegate

-(void) showNoteEditor;

@end
@interface SMNoteActivity : UIActivity

+ (NSString*)activityTypeString;
@property id<SMNoteActivityDelegate> delegate;

@end