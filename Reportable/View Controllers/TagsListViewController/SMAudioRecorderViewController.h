//
//  SMAudioRecorderViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 12/27/12.
//  Copyright (c) 2012 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AVFoundation/AVAudioSession.h>

@interface SMAudioRecorderViewController : UIViewController <AVAudioRecorderDelegate, AVAudioPlayerDelegate>
{
    int countsec,countmin,totaltime, counter;
    NSTimer * recordingTimer;
    BOOL isInPlayMode;
    NSURL *tempAudioURL;
    AVAudioRecorder *audioRecorder;
    IBOutlet UILabel *maxDurationLabel;
}

@property (nonatomic, strong) IBOutlet UIButton *audioButton;
- (IBAction)audioButtonAction:(id)sender;
@end
