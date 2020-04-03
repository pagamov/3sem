//
//  vector.h
//  obg-c
//
//  Created by Pavel Gamov on 30.09.2019.
//  Copyright © 2019 Pavel Gamov. All rights reserved.
//

@interface vector : NSObject

@property int * array;
@property int size;
@property int vars;

- (id) initWithSize:(int) size;

- (void) printIt;

- (void) pushIt:(int) number;

- (void) resizeIt;

- (void) sortIt;

- (int) getVars;

- (void) swap:(int) i : (int) j;

+ (instancetype) vectorWithSize:(int) size;

@end

/* vector_h */
