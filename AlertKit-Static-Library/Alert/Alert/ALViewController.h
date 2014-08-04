//
//  ALViewController.h
//  Alert
//
//  Created by Rob Ringham on 8/3/14.
//  Copyright (c) 2014 Rob Ringham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AKAlert.h"

@interface ALViewController : UIViewController<AKAlertDelegate>

- (IBAction)alertButtonPressed:(id)sender;

@end