//
//  NSString+ValidateEmail.m
//  Cure4Kids
//
//  Created by Cory Hymel on 9/11/12.
//  Copyright (c) 2012 Cory Hymel. All rights reserved.
//

#import "NSString+ValidateEmail.h"

@implementation NSString (ValidateEmail)

-(BOOL)stringIsValidEmailStrickly:(bool)strictlyVerfiy {
    NSString *stricterFilterString = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    NSString *laxString = @".+@.+\\.[A-Za-z]{2}[A-Za-z]*";
    NSString *emailRegex = strictlyVerfiy ? stricterFilterString : laxString;
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    
    return [emailTest evaluateWithObject:self];
}

@end
