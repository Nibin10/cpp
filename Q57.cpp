// b. Implement a function to calculate the nth Fibonacci number using constexpr recursion. 
#include <iostream>

// Recursive constexpr function to calculate the nth Fibonacci number
constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    constexpr int n = 10; // Change the value of n for different Fibonacci numbers

    // Calculate and print the nth Fibonacci number
    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;

    return 0;
}
