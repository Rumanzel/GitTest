//
//  DetailViewController.h
//  PilotRuma
//
//  Created by ruma on 5/22/13.
//  Copyright (c) 2013 ruma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
