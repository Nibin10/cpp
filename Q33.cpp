// b. Implement a function to find the factorial of a number using a loop. 
#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    unsigned long long result = factorial(n);
    std::cout << "Factorial of " << n << " is: " << result << std::endl;

    return 0;
}
