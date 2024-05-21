// Implement a function template that deduces its return type as the result of a custom mathematical operation on two numbers.
#include <iostream>

template <typename T, typename U, typename F>
auto custom_operation(T a, U b, F&& operation) -> decltype(operation(a, b)) {
    return operation(a, b);
}

int main() {
    // Example custom operation: multiplication
    auto multiply = [](auto x, auto y) { return x * y; };
    int result1 = custom_operation(5, 3, multiply);
    std::cout << "5 * 3 = " << result1 << std::endl;

    // Example custom operation: addition
    auto add = [](auto x, auto y) { return x + y; };
    double result2 = custom_operation(3.5, 2.5, add);
    std::cout << "3.5 + 2.5 = " << result2 << std::endl;

    // Example custom operation: subtraction
    auto subtract = [](auto x, auto y) { return x - y; };
    float result3 = custom_operation(10.5f, 5.5f, subtract);
    std::cout << "10.5 - 5.5 = " << result3 << std::endl;

    return 0;
}
