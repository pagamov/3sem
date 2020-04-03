#include <iostream>
#include <vector>

int prime(std::vector <long int> v, long int number) {
  if (number == 0 || number == 1) {
    return 0;
  }
  for (int i = 0; i < v.size(); i++) {
    if (number % (v)[i] == 0) {
      return 0;
    }
  }
  return 1;
}


int main() {
  long int number = 600851475143;

  std::vector<long int> v;
  long int best = 0;
  long int work = 2;

  while (work < number) {
    if (prime(v, work)) {
      v.push_back(work);
      std::cout << "\r" << best;
      if (number % work == 0)
        best = work;
    }
    work++;
  }

  // for (int i = 0; i < v.size(); i++) {
  //   std::cout << v[i] << " ";
  // }
  // std::cout << std::endl;

  std::cout << best << std::endl;
  return 0;
}
