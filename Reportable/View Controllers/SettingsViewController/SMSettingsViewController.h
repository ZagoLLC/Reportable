//
//  SMSettingsViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 2/19/13.
//  Copyright (c) 2013 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "SMDateFormatterViewController.h"
#import "SMCopyrightViewController.h"
#import <MessageUI/MFMailComposeViewController.h>

@interface SMSettingsViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate,MFMailComposeViewControllerDelegate>
{
    IBOutlet UIButton *footerButton;
    IBOutlet UILabel *footerLabel;
}

@property (weak, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)saveButtonAction:(id)sender;

@end
