//
//  person.h
//  obg-c
//
//  Created by Pavel Gamov on 29.09.2019.
//  Copyright © 2019 Pavel Gamov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface person : NSObject

@property (assign) int age;

@property (nonatomic, strong) NSString * name;

- (id) initWithAge:(int) age andName:(NSString *) name;

- (void) printName;

- (int) getBirthYear;

+ (instancetype) personWithAge: (int)age andName:(NSString *)name;

+ (NSString *) speciesName;

@end

