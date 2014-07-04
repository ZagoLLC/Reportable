//
//  SMDropboxCustomCell.h

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMDropboxCustomCell : UITableViewCell{
}
@property (strong, nonatomic) IBOutlet UILabel *filenameLabel;
@property (strong, nonatomic) IBOutlet UILabel *sizeLabel;
@property (strong, nonatomic) IBOutlet UIImageView *checkMark;
@property (strong, nonatomic) IBOutlet UIImageView *iconImageView;

@end
