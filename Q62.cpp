// b. Implement a program to show the use of extern storage class for variable declaration. 

#include <iostream>

// External variable declaration
extern int externVar;

int main() {
    // Accessing external variable
    std::cout << "Extern variable: " << externVar << std::endl;

    // Modifying external variable
    externVar = 20;

    // Accessing modified external variable
    std::cout << "Modified extern variable: " << externVar << std::endl;

    return 0;
}
