#include <iostream>
#include <vector>

int correct(const unsigned int number) {
  for (unsigned int i = 11; i < 21; i++) {
    if (number % i != 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  unsigned int start = 232792550;
  while (1) {
    if (correct(start)) {
      std::cout << std::endl << "final " << start << std::endl;
      return 0;
    }
    std::cout << "\r" << "number " << start;
    start++;
  }
  return 0;
}
