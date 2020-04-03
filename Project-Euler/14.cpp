#include <iostream>
#include <vector>
#include <thread>
#include <math.h>

long int chain(long int number) {
    std::vector <long int> v;
    v.push_back(number);
    while (number != 1) {
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = 3 * number + 1;
        }
        v.push_back(number);
    }
    return v.size();
}

int main() {

    long max = 0; long res; long maxi = 0;
    for (long i = 1; i < 1000001; i++) {
        std::cout << "\r" << "work " << i;
        res = chain(i);
        if (res > max) {
            max = res;
            maxi = i;
        }
    }

    std::cout << "res " << maxi << std::endl;
    return 0;
}
