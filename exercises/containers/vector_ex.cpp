#include "vector_ex.hpp"

// std::vector documentation:
// https://en.cppreference.com/w/cpp/container/vector

std::vector<int> GetEven(std::vector<int> const& source) {
  std::vector<int> evens;
  for (auto num: source) {
    if (num % 2 == 0) {
      evens.push_back(num);
    }
  }
  return evens;
}

void PrintVectorOfInt(std::ostream& output, std::vector<int> const& data) {
  output << "[ ";
  for (auto it = data.begin(); it != data.end(); ++it) {
    if (it == data.end()-1) {
      output << std::to_string(*it);
    } else {
      output << std::to_string(*it) << ", ";
    }
  }
  output << "]";
}
