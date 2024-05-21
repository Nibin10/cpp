// "Storage classes: 
// a. Write a program to demonstrate the difference between static and automatic storage classes. 

#include <iostream>

// Global variables with static storage class
static int staticVar = 5;

void function() {
    // Automatic variable
    int autoVar = 10;

    // Modify static variable
    staticVar = 15;

    std::cout << "Inside function:" << std::endl;
    std::cout << "Static variable: " << staticVar << std::endl;
    std::cout << "Automatic variable: " << autoVar << std::endl;
}

int main() {
    // Calling function to demonstrate the changes
    function();

    // Accessing static variable from main
    std::cout << "Inside main:" << std::endl;
    std::cout << "Static variable: " << staticVar << std::endl;

    return 0;
}
