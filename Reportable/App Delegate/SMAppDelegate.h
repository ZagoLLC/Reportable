//
//  SMAppDelegate.h

//  Reportable
//
//  Created by Dinesh Patil on 11/5/12.
//  Copyright (c) 2012 Codewalla Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMSplashViewController.h"
#import "macros.h"
#import "SMWelcomeViewController.h"
#import <CoreData/CoreData.h>
#import "SMSharedData.h"
#import <DropboxSDK/DropboxSDK.h>


@interface SMAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate,DBSessionDelegate,DBRestClientDelegate,DBNetworkRequestDelegate>
{
    NSObject *timestamp,*token,*ubi;
}
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) SMSplashViewController  * splashVC;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain ) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) BOOL hasLaunchedOnce;
@property (strong) NSMetadataQuery *query;

- (NSURL *)applicationDocumentsDirectory;
- (NSManagedObjectContext *)managedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void) showHUDWithText:(NSString *)text;
- (void) hideHUD;
@end
