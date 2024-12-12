#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);
  bool b = vec[0];
  b = vec[1];
  size_t size = vec.size(); // This is now consistently correct
  std::cout << "Size: " << size << std::endl;
  for (size_t i = 0; i < size; ++i) {
      std::cout << "Element " << i << ": " << vec[i] << std::endl;
  }
  return 0;
}

// Alternative: Using std::vector<bool> and checking before accessing
#include <iostream>
#include <vector>

int main() {
    std::vector<bool> vec;
    vec.push_back(true);
    vec.push_back(false);
    if (vec.size() > 0) {
        bool b = vec[0];
    }
    if (vec.size() > 1){
        bool b = vec[1];
    }
    size_t size = vec.size();
    std::cout << "Size: " << size << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << vec[i] << std::endl;
    }
    return 0;
}