//
//  Die.h
//  Threelow
//
//  Created by Nelson Chow on 2016-03-09.
//  Copyright © 2016 Nelson Chow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dice.h"

@interface Die : NSObject

@property (nonatomic) NSMutableArray *die;

- (void) addDie: (Dice *) newDice;

@end
