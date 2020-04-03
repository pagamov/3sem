#include <iostream>
#include <math.h>

int one() {
  unsigned int res = 0;
  for (int i = 1; i < 101; i++) { res += (pow(i, 2)); }
  return res;
}

int two() {
  unsigned int res = 0;
  for (int i = 1; i < 101; i++) { res += i; }
  return pow(res, 2);
}

int main() {
  std::cout << "res: " << two() - one() << std::endl;
  return 0;
}
