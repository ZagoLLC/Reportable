//
//  SMMediaCaptureViewController.h

//  Reportable
//
//  Created by Dinesh Patil on 03/12/12.
//  Copyright (c) 2012 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AVFoundation/AVAudioSession.h>
@class SMMediaCaptureViewController;


@interface SMMediaCaptureViewController : UIViewController<UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate,  AVAudioRecorderDelegate, AVAudioPlayerDelegate>
{}



@end

