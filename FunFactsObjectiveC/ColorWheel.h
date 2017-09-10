//
//  ColorWheel.h
//  FunFactsObjectiveC
//
//  Created by Joao Guilherme Magioli on 06/02/16.
//  Copyright © 2016 Joao Guilherme Magioli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;
- (UIColor *) randomColor;

@end
