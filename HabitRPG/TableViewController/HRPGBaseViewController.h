//
//  HRPGBaseViewController.h
//  Habitica
//
//  Created by Phillip Thelen on 29/04/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HRPGManager.h"
#import "TutorialStepsProtocol.h"

@interface HRPGBaseViewController : UITableViewController<TutorialStepsProtocol>

@property(nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property(nonatomic) HRPGManager *sharedManager;
@property CGFloat viewWidth;
@property NSString *readableScreenName;

@property NSString *tutorialIdentifier;
@property NSArray *coachMarks;
@property BOOL displayedTutorialStep;
@property TutorialStepView *activeTutorialView;

- (void)preferredContentSizeChanged:(NSNotification *)notification;

- (BOOL)isIndexPathVisible:(NSIndexPath *)indexPath;

@end
