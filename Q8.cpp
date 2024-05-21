// Write a variable template that computes the factorial of a given number at compile-time.

#include <iostream>

template <int N>
constexpr int factorial = N * factorial<N - 1>;

template <>
constexpr int factorial<0> = 1;

int main() {
    constexpr int result = factorial<5>; // Computes factorial of 5 at compile-time
    std::cout << "Factorial of 5 is: " << result << std::endl;
    return 0;
}
