//
//  StarDetailViewController.h
//  Starglobe
//
//  Created by Alex on 29/05/2017.
//  Copyright © 2017 Azurcoding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StarDetailViewController : UITableViewController
@property NSMutableArray *characteristicsArray;
@property NSMutableArray *characteristicsValueArray;
@property NSMutableArray *descriptionArray;
@property NSMutableArray *imageArray;
@property NSMutableArray *linkArray;
@property NSString *contentFile;
@property NSString *viewTitle;
@property (nonatomic, retain) UIView *bannerView;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *headlineLabel;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UIButton *upgradeButton;
@property (nonatomic, retain) UIButton *overlayButton;
@end
