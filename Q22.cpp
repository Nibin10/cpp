// Create a function template that deduces its return type based on the return types of the functions passed as arguments.

#include <iostream>

template <typename F, typename... Args>
auto deduce_return_type(F&& func, Args&&... args) -> decltype(func(std::forward<Args>(args)...)) {
    return func(std::forward<Args>(args)...);
}

int main() {
    auto add = [](int x, int y) -> int { return x + y; };
    auto multiply = [](double x, double y) -> double { return x * y; };
    auto concatenate = [](const std::string& str1, const std::string& str2) -> std::string { return str1 + str2; };

    int result1 = deduce_return_type(add, 5, 3);
    std::cout << "Addition result: " << result1 << std::endl;

    double result2 = deduce_return_type(multiply, 3.5, 2.5);
    std::cout << "Multiplication result: " << result2 << std::endl;

    std::string result3 = deduce_return_type(concatenate, "Hello, ", "world!");
    std::cout << "Concatenation result: " << result3 << std::endl;

    return 0;
}
