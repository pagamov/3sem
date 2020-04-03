//
//  person.m
//  obg-c
//
//  Created by Pavel Gamov on 29.09.2019.
//  Copyright © 2019 Pavel Gamov. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "person.h"

@implementation person

- (id) initWithAge:(int)age andName:(NSString *)name
{
    self = [super init];
    if (self) {
        self.age = age;
        self.name = name;
    }
    return self;
}

- (void) printName
{
    NSLog(@"%@", self.name);
}

- (int) getBirthYear
{
    int correntYear = 2019;
    int birthYear = correntYear - self.age;
    return birthYear;
}

+ (instancetype) personWithAge:(int)age andName:(NSString *)name
{
    person * william = [[person alloc] initWithAge:age andName:name];
    return william;
}

+ (NSString *) speciesName
{
    NSString * speciesName = @"Homo sapiens";
    return speciesName;
}
@end

