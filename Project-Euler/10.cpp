#include <iostream>
#include <vector>
#include <list>

void prime(std::vector <int> &v, int number) {
    for (int i = 2; i < number; i++)
        v.push_back(i);
    int size = v.size();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (v[j] % v[i] == 0 && i != j) {
                v.erase(v.begin() + j);
                size--;
                j--;
            }
        }
    }
}


int main() {
  long int sum = 0;
  int range = 2000001;
  std::vector <int> v;
  prime(v, range);
  for (int i = 0; i < v.size(); i++)
      sum += v[i];
  std::cout << std::endl << "res " << sum << std::endl;
  return 0;
}
