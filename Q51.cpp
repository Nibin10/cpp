// "Single line functions: 
// a. Implement a function to find the maximum of two numbers using a single line of code. 

#include <iostream>

// Function to find the maximum of two numbers
int max(int a, int b) { return (a > b) ? a : b; }

int main() {
    int num1 = 10;
    int num2 = 20;

    // Call the max function and print the result
    std::cout << "The maximum of " << num1 << " and " << num2 << " is: " << max(num1, num2) << std::endl;

    return 0;
}
