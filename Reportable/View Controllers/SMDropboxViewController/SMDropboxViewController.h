//
//  SMDropboxViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "SMDropboxListViewController.h"
@interface SMDropboxViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,DBRestClientDelegate>
{}

@property (nonatomic, strong) DBRestClient *restClient;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIView *quotaContainerView;
@property (strong, nonatomic) IBOutlet UILabel *currentUsageStaticLabel;
@property (strong, nonatomic) IBOutlet UIProgressView *quotaProgressView;
@property (strong, nonatomic) IBOutlet UIButton *signOutButton;
@property (strong, nonatomic) IBOutlet UILabel *quotaRemainingLabel;

- (IBAction)dropboxStateToggled:(id)sender;

@end
