#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Safe access using at()
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec.at(i) << " ";
  }
  std::cout << std::endl; 

  //Alternative Safe Access using iterators
  for(int x : vec){
    std::cout << x << " ";
  }
  std::cout << std::endl;

  return 0;
}
