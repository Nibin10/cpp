// b. Write a function to check if a number is prime using a single line of code. 
#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if a number is prime
bool isPrime(int n) { return n > 1 && std::all_of(std::begin(std::vector<int>(n - 1)), std::end(std::vector<int>(n - 1)), [n](int i) { return n % (i + 2) != 0; }); }

int main() {
    int num = 17; // Change the number to test for primality

    // Call the isPrime function and print the result
    if (isPrime(num))
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}
