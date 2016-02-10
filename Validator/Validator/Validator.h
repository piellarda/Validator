//
//  Validator.h
//  Validator
//
//  Created by Antoine Piellard on 10/02/16.
//  Copyright © 2016 piellard. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Validator.
FOUNDATION_EXPORT double ValidatorVersionNumber;

//! Project version string for Validator.
FOUNDATION_EXPORT const unsigned char ValidatorVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Validator/PublicHeader.h>

#import <Validator/AJWNumericValidator.h>
#import <Validator/AJWStringValidator.h>
#import <Validator/AJWValidator+Private.h>
#import <Validator/AJWValidator.h>
#import <Validator/AJWValidatorCustomRule.h>
#import <Validator/AJWValidatorEqualRule.h>
#import <Validator/AJWValidatorRangeRule.h>
#import <Validator/AJWValidatorRegularExpressionRule.h>
#import <Validator/AJWValidatorRemoteRule.h>
#import <Validator/AJWValidatorRequiredRule.h>
#import <Validator/AJWValidatorRule.h>
#import <Validator/UIView+AJWValidator.h>