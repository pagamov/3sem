#include <iostream>
#include <vector>
#include <math.h>

int trip(int a, int b, int c) {
  if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
    return 1;
  }
  return 0;
}

int sum(int a, int b, int c) {
  if (a + b + c == 1000) {
    return 1;
  }
  return 0;
}


int main() {
  int a = 200, b = 1, c = 1;
  std::cout << "a = " << a << " b = " << b << " c = " << c;
  while (a < 500) {
    while (b < 500) {
      while (c < 500) {
        std::cout << "\r" << "a = " << a << " b = " << b << " c = " << c;
        if (sum(a, b, c) && trip(a, b, c)) {
          std::cout << std::endl << "res " << a*b*c << std::endl;
          return 0;
        }
        c++;
      }
      b++; c = 0;
    }
    a++; b = 0; c = 0;
  }

  return 0;
}
