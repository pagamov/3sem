#import <Foundation/Foundation.h>
#import "person.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        person * william = [person personWithAge:18 andName:@"William"];
        [william printName];
        int birthYear = [william getBirthYear];
        NSLog(@"%@", [person speciesName]);
    }

    NSLog(@"Test");
    return 0;
}
