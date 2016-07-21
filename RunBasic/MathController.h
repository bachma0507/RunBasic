//
//  MathController.h
//  RunBasic
//
//  Created by Barry on 7/20/16.
//  Copyright © 2016 Barry C Julien. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MathController : NSObject

+ (NSString *)stringifyDistance:(float)meters;
+ (NSString *)stringifySecondCount:(int)seconds usingLongFormat:(BOOL)longFormat;
+ (NSString *)stringifyAvgPaceFromDist:(float)meters overTime:(int)seconds;
+ (NSArray *)colorSegmentsForLocations:(NSArray *)locations;

@end
