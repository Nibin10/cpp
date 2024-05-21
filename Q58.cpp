// c. Develop a program to calculate the factorial of a number using constexpr recursion. 
#include <iostream>

// Recursive constexpr function to calculate factorial
constexpr unsigned long long factorial(unsigned long long n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr unsigned long long num = 10; // Change the number for which you want to calculate factorial

    // Calculate and print the factorial of the number
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    return 0;
}
