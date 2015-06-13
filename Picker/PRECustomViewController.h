//
//  PRECustomViewController.h
//  Picker
//
//  Created by Maclab03 on 6/8/15.
//  Copyright (c) 2015 LiptakLask. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PRECustomViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) IBOutlet UIPickerView *picker;
@property (weak, nonatomic) IBOutlet UILabel *winLabel;
@property (weak, nonatomic) IBOutlet UIButton *button;
- (IBAction)spin:(id)sender;

@property (strong, nonatomic) NSArray *images;
@end
