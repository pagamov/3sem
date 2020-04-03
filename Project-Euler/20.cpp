#include <iostream>
#include <vector>
#include <thread>
#include <string>
#include <math.h>

#include "longDig.h"

unsigned long long getFac(int size);

unsigned long long getFac(unsigned long long int number, int size) {
    while (size != 1) {
        if (number * (size - 1) < number) {
            printf("size:= %d\n", size);
            printf("number next %llu\n", getFac(1, size));
            return number;
        }
        number *= size;
        size--;
    }
    return number;
}

int main() {
    int size;
    longDig * number = create();
    put(number, 123123124);
    print(number);
    std::cin >> size;
    std::cout << "res " << getFac(1, size) << std::endl;
    return 0;
}
