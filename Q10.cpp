// Create a variable template that provides the maximum value for a given integral type.

#include <iostream>
#include <limits>

template<typename T>
constexpr T max_value = std::numeric_limits<T>::max();

int main() {
    std::cout << "Maximum value for int: " << max_value<int> << std::endl;
    std::cout << "Maximum value for unsigned int: " << max_value<unsigned int> << std::endl;
    std::cout << "Maximum value for short: " << max_value<short> << std::endl;
    // and so on for other integral types...
    return 0;
}
