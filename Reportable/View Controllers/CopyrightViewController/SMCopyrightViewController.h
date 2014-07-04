//
//  SMCopyrightViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 04/04/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMCopyrightViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,UITextViewDelegate>
{
}
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
