// e. Write a program to illustrate the use of register storage class for variable declaration."
#include <iostream>

int main() {
    // Declare a variable using register storage class
    register int num = 10;

    std::cout << "Value of num: " << num << std::endl;

    return 0;
}
