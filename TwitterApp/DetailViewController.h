//
//  DetailViewController.h
//  TwitterApp
//
//  Created by chama on 2014/02/12.
//  Copyright (c) 2014年 chama. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property NSString *tweet;
@property (weak, nonatomic) IBOutlet UITextView *textView01;
@property (weak, nonatomic) IBOutlet UILabel *labelTweet;

@end
