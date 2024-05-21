// Implement a function template that deduces its return type as the sum of two numbers passed as arguments.
template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

#include <iostream>

int main() {
    int num1 = 5;
    double num2 = 3.5;
    
    auto sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
