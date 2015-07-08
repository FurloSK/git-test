//
//  DetailViewController.h
//  git-test
//
//  Created by Róbert Toth on 8.7.2015.
//  Copyright (c) 2015 Róbert Toth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

