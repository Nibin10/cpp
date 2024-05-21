// c. Develop a program to calculate the factorial of a number using a single line recursive function. 
#include <iostream>

// Single line recursive function to calculate factorial
int factorial(int n) { return (n == 0) ? 1 : n * factorial(n - 1); }

int main() {
    int num = 5; // Change the number for which you want to calculate factorial

    // Calculate and print the factorial of the number
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    return 0;
}
