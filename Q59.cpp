// d. Create a program to check if a number is even or odd using a constexpr function. 
#include <iostream>

// constexpr function to check if a number is even
constexpr bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    constexpr int number = 10; // Change the number to check for evenness

    // Check if the number is even and print the result
    if (isEven(number))
        std::cout << number << " is even." << std::endl;
    else
        std::cout << number << " is odd." << std::endl;

    return 0;
}
