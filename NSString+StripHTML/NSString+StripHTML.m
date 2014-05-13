//
//  NSString+StripHTML.m
//
//  Created by Cory Hymel on 12/3/12.
//  Copyright (c) 2012 Cory Hymel. All rights reserved.
//

#import "NSString+StripHTML.h"

@implementation NSString (StripHTML)

-(NSString *) stringByStrippingHTML {
    NSRange r;
    NSString *s = [self copy];
    while ((r = [s rangeOfString:@"<[^>]+>" options:NSRegularExpressionSearch]).location != NSNotFound)
        s = [s stringByReplacingCharactersInRange:r withString:@""];
    return s;
}

@end
