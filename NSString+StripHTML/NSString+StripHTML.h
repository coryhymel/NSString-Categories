//
//  NSString+StripHTML.h
//
//  Created by Cory Hymel on 12/3/12.
//  Copyright (c) 2012 Cory Hymel. All rights reserved.
//
/**
 @abstract NSString category to strip HTML tags from a given NSString.
*/

#import <Foundation/Foundation.h>

@interface NSString (StripHTML)

/**
 @return The stripped HTML string
*/
-(NSString *)stringByStrippingHTML;

@end
