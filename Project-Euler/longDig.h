#include <iostream>
#include <vector>
#include <thread>
#include <string>
#include <math.h>

#ifndef longDig_hpp
#define longDig_hpp

typedef struct longDig {
    char * number;
    int size;
} longDig;

longDig * create() {
    longDig * res = (longDig *)malloc(sizeof(longDig));
    res->number = (char *)malloc(sizeof(char) * 1000000000000);
    res->size = 0;
    return res;
}

void multiply(longDig * to, longDig * from) {
    int res, pivet = 0, int j;
    for (int i = 0; i < from->size; i++) {
        res = pars(from->number[i]) * pars(to->number[i]);
        if (res >= 10) {
            to->number[i] = parser(res % 10);
            pivet = res / 10;
        }
        j = i;
    }
}

int pars(char c) {
    return (int)(c - '0');
}

char parser(int number) {
    return (char)('0' + number);
}

void print(longDig * number) {
    int size = number->size;
    for (int i = size - 1; i > -1 ; i--) {
        printf("%c", number->number[i]);
    }
    printf("\n");
}

void put(longDig * to, unsigned long long int number) {
    int pivet;
    int i = 0;
    if (number == 0) {
        to->number[0] = '0';
        i++;
    }
    while (number != 0) {
        pivet = number % 10;
        to->number[i++] = parser(pivet);
        number /= 10;
    }
    to->size = i;
}


#endif
