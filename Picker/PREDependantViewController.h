//
//  PREDependantViewController.h
//  Picker
//
//  Created by Maclab03 on 6/8/15.
//  Copyright (c) 2015 LiptakLask. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PREDependantViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) NSDictionary *stateZips;
@property (strong, nonatomic) NSArray *states;
@property (strong, nonatomic) NSArray *zips;
@property (weak, nonatomic) IBOutlet UIPickerView *dependentPicker;

- (IBAction)buttonPressed:(id)sender;

@end
