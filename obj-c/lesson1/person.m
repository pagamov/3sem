#import "person.h"

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
