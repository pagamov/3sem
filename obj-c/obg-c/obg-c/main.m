//
//  main.m
//  obg-c
//
//  Created by Pavel Gamov on 29.09.2019.
//  Copyright © 2019 Pavel Gamov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "person.h"
#import "vector.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //playing with person
        person * william = [person personWithAge:18 andName:@"William"];
        [william printName];
        int birthYear = [william getBirthYear]; printf("year %d\n", birthYear);
        NSLog(@"%@", [person speciesName]);
        //playing with vector
        vector * v = [vector vectorWithSize:10];
        [v pushIt:100];  [v pushIt:20];  [v pushIt:30];
        [v printIt];
        [v sortIt];
        [v printIt];
    }
    return 0;
}
