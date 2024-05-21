// e. Write a program to check if a string is a palindrome using a single line of code."
#include <iostream>
#include <algorithm>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) { return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin()); }

int main() {
    std::string input = "radar"; // Change the string to check for palindrome

    // Check if the string is a palindrome and print the result
    if (isPalindrome(input))
        std::cout << input << " is a palindrome." << std::endl;
    else
        std::cout << input << " is not a palindrome." << std::endl;

    return 0;
}
