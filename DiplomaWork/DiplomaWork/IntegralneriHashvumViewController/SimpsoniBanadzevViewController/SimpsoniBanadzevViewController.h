//
//  SimpsoniBanadzevViewController.h
//  DiplomaWork
//
//  Created by Meri on 12/7/16.
//  Copyright © 2016 Meri. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HeaderIntegral.h"

@interface SimpsoniBanadzevViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource, TestProtocol>

-(double)countSimpson;


@end
