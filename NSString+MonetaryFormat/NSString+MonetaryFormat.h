/**
 The MIT License (MIT)
 
 Copyright (c) 2012 Cory Hymel
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#import <Foundation/Foundation.h>

/**
 @category NSString(MonetaryFormat)
 @abstract This category allows you to easily obtain the monetary format ("$0.00") from a given NSString or float value.
*/
@interface NSString (MonetaryFormat)

/**
 Converts a number string to monetary format.
 @return A properly formatted monetery string including $
 */
- (NSString*)stringByMonetaryFormat;

/**
 Converts a float to monetary format.
 @param total Float value to convert
 @return A properly formatted monetary string inlcuding $
 */
+ (NSString*)convertFloatToMonetaryFormat:(float)total;

@end
