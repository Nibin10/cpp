// d. Create a function to reverse a string using a single line of code. 
#include <algorithm>
#include <iostream>
#include <string>

// Function to reverse a string
std::string reverseString(const std::string& str) { return {str.rbegin(), str.rend()}; }

int main() {
    std::string input = "Hello, world!"; // Change the string to reverse

    // Reverse the string and print the result
    std::cout << "Original string: " << input << std::endl;
    std::cout << "Reversed string: " << reverseString(input) << std::endl;

    return 0;
}
