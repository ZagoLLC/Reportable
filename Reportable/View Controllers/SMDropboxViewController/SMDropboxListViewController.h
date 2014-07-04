//
//  SMDropboxListViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMDropboxComponent.h"
#import "Utility.h"
#import "MBProgressHUD.h"
#import "SMTag.h"
#import "SMDropboxCustomCell.h"
#import "SMLocationTracker.h"
#import "SMDropboxProgressViewController.h"

@class SMDropboxViewController;

@protocol SMDropboxViewControllerDelegate <NSObject>

- (void) delegatedDropboxExportActionWithDirectoryPath:(NSString *)path;
@end

@interface SMDropboxListViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,DBRestClientDelegate,SMDropboxProgressDelegate>{
    NSMutableArray *filesArray;
    IBOutlet UIButton *doneButton;
    NSMutableArray *selectedFilesArray;
}

@property (strong, nonatomic) IBOutlet UIButton *backButton;
@property (strong, nonatomic) IBOutlet SMNavigationBar *navigationBar;@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIButton *cancelButton;
@property (nonatomic,unsafe_unretained) id <SMDropboxViewControllerDelegate> delegate;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil andDirectory:(NSString *)dir andMode:(NSInteger)mode;
- (IBAction)doneButtonAction:(id)sender;
- (IBAction)backButtonAction:(id)sender;
- (IBAction)cancelButtonAction:(id)sender;

@end
