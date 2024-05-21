
// e. Write a program to reverse a string using pass by reference."

#include <iostream>
#include <string>

// Function to reverse a string using pass by reference
void reverseString(std::string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // Swap characters from beginning and end
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    std::string inputString;

    // Input string from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the reverseString function
    reverseString(inputString);

    // Output the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
