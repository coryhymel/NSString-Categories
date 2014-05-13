//
//  NSString+ValidateEmail.h
//
//  Created by Cory Hymel on 9/11/12.
//  Copyright (c) 2012 Cory Hymel. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @abstract Determines if a give string is a valid email address
*/
@interface NSString (ValidateEmail)

/**
 @param strictlyVerify If the check should be strict or not
 @return If the string is a valid email address
*/
-(BOOL)stringIsValidEmailStrickly:(bool)strictlyVerfiy;

@end
