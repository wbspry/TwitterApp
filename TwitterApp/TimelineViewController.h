//
//  TimelineViewController.h
//  TwitterApp
//
//  Created by chama on 2014/02/11.
//  Copyright (c) 2014年 chama. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineViewController : UITableViewController{
    NSArray *timeline;
    NSString *args;
}

- (IBAction)pressComposeButton:(id)sender;

@end
