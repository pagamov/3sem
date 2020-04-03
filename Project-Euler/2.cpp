#include <iostream>

int main() {
  int a = 0, b = 1, c, sum = 0;

  while (b < 4000000) {
    if (b % 2 == 0) {
      sum += b;
    }
    c = b + a;
    a = b;
    b = c;
  }
  std::cout << sum << std::endl;
  return 0;
}
