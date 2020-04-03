#include <iostream>
#include <vector>

int palindrom(int number) {
  std::vector <int> v;
  int size = 0, pivet, l = 0, r, i;
  while (number != 0) { v.push_back(number % 10); number /= 10; size++; }

  r = v.size() - 1; i = v.size() / 2;
  while (i > 0) {
    if (v[l] != v[r])
      return 0;
    i--; r--; l++;
  }
  return 1;
}

int main() {
  int a = 999, b = 999, best = 0;
  std::cout << "a = " << a << " b = " << b;
  while (a > 100) {
    while (b > 100) {
      std::cout << "\r" << "a = " << a << " b = " << b;
      if (palindrom(a * b)) {
        if (best < (a * b)) {
          best = a * b;
        }
        //std::cout << "\r" << "a = " << a << " b = " << b << std::endl;
        std::cout << "beggest " << a * b << std::endl;
        //return 0;
      }
      b--;
    }
    a--;
    b = 999;
  }
  std::cout << std::endl << best << std::endl;
  return 0;
}
