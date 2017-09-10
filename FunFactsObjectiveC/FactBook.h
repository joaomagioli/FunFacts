//
//  FactBook.h
//  FunFactsObjectiveC
//
//  Created by Joao Guilherme Magioli on 06/02/16.
//  Copyright © 2016 Joao Guilherme Magioli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *) randomFact;

@end
