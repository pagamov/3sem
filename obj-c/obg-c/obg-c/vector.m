//
//  vector.m
//  obg-c
//
//  Created by Pavel Gamov on 30.09.2019.
//  Copyright © 2019 Pavel Gamov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdlib.h>
#include "vector.h"

@implementation vector

- (id) initWithSize:(int)size
{
    self = [super init];
    if (self) {
        self.array = (int *)malloc(sizeof(int) * size);
        self.size = size;
        self.vars = 0;
    }
    return self;
}

- (void) printIt
{
    for (int i = 0; i < self.vars; i++) {
        printf("%d ", self.array[i]);
    }
    printf("\n");
}

- (void) pushIt:(int) number
{
    if (self.size == 0 || self.vars + 1 > self.size) {
        [self resizeIt];
    }
    self.array[self.vars] = number;
    self.vars++;
}

- (void) resizeIt
{
    if (self.size == 0) {
        self.array = (int *)realloc(self.array, sizeof(int) * (self.size + 1));
        self.size++;
    } else if (self.vars + 1 > self.size) {
        self.array = (int *)realloc(self.array, sizeof(int) * (self.size * 2));
        self.size *= 2;
    }
}

- (void) swap:(int) i : (int) j
{
    int pivet = self.array[j];
    self.array[j] = self.array[j + 1];
    self.array[j + 1] = pivet;
}

- (int) getVars
{
    return self.vars;
}

- (void) sortIt
{
    int len = [self getVars];
    int swapped = 0;
    int j;
    for (int i = 0; i < len; i++) {
        swapped = 0;
        for (j = 0; j < len - i - 1; j++) {
            if (self.array[j] > self.array[j + 1]) {
                [self swap: j : j + 1];
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

+ (instancetype) vectorWithSize:(int) size
{
    vector * v = [[vector alloc] initWithSize:size];
    return v;
}

@end
