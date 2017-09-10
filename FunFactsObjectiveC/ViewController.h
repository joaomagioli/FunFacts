//
//  ViewController.h
//  FunFactsObjectiveC
//
//  Created by Joao Guilherme Magioli on 06/02/16.
//  Copyright © 2016 Joao Guilherme Magioli. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

