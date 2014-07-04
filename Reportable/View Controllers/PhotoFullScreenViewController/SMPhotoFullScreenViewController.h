//
//  SMPhotoFullScreenViewController.h

//  Reportable
//
//  Created by Suraj Jadhav on 12/05/14.
//  Copyright (c) 2014 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMPhotoFullScreenViewController : UIViewController
{
}
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) IBOutlet UIScrollView *imageViewContainerScrollView;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil andWithImageAtPath:(NSString *)path;
@end
