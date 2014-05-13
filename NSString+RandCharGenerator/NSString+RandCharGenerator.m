//
//  NSString+RandCharGenerator.m
//
//  Created by Cory Hymel on 12/21/12.
//  Copyright (c) 2012 Cory Hymel All rights reserved.
//

#import "NSString+RandCharGenerator.h"

@implementation NSString (RandCharGenerator)


+ (NSString*)randomCharacterStringOfLength:(NSUInteger)len {
    NSString *alphabet = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY0123456789";
    
    NSMutableString *s = [NSMutableString stringWithCapacity:len];
    for (NSUInteger i = 0U; i < len; i++) {
        u_int32_t r = arc4random() % [alphabet length];
        unichar c = [alphabet characterAtIndex:r];
        [s appendFormat:@"%C", c];
    }
    return [s copy];
}

@end
