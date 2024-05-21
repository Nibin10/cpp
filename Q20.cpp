// Create a function template that deduces its return type as the concatenation of two strings passed as arguments.
#include <string>

template <typename T, typename U>
auto concatenate(T&& a, U&& b) -> decltype(std::forward<T>(a) + std::forward<U>(b)) {
    return std::forward<T>(a) + std::forward<U>(b);
}

#include <iostream>

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    
    auto result = concatenate(str1, str2);
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}
