//
//  PREDoubleViewController.h
//  Picker
//
//  Created by Maclab03 on 6/8/15.
//  Copyright (c) 2015 LiptakLask. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PREDoubleViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>

@property (weak, nonatomic) IBOutlet UIPickerView *doublePicker;
@property (strong, nonatomic) NSArray *fillingTypes;
@property (strong, nonatomic) NSArray *breadTypes;
-(IBAction)buttonPressed:(id)sender;

@end
