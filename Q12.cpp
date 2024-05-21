// Create a variable template that provides the maximum value for a given integral type.

#include <limits>

template <typename T>
constexpr T max_value = std::numeric_limits<T>::max();

#include <iostream>

int main() {
    std::cout << "Maximum value of int: " << max_value<int> << std::endl;
    std::cout << "Maximum value of long: " << max_value<long> << std::endl;
    std::cout << "Maximum value of unsigned int: " << max_value<unsigned int> << std::endl;
    // Add more types as needed
    
    return 0;
}
