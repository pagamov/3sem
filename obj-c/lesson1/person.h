#import <Foundation/Foundation.h>

@interface person : NSObject

@property (assign) int age;

@property (nonatomic, strong) NSString * name;

- (id) initWithAge: (int) age andName:(NSString *) name;

- (void) printName;

- (int) getBirthYear;

+ (instancetype) personWithAge: (int)age andName:(NSString *)name;

+ (NSString *) speciesName;

@end
