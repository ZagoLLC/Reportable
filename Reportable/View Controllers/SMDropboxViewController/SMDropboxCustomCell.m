//
//  SMDropboxCustomCell.m

//  Reportable
//
//  Created by Suraj Jadhav on 26/03/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import "SMDropboxCustomCell.h"

@implementation SMDropboxCustomCell

@synthesize filenameLabel;
@synthesize sizeLabel;@synthesize checkMark;
@synthesize iconImageView;
- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

@end
