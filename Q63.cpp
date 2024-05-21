// c. Develop a program that uses static storage class to maintain a counter across function calls. 
#include <iostream>

void incrementCounter() {
    static int counter = 0; // static variable to maintain counter across function calls
    counter++;
    std::cout << "Counter: " << counter << std::endl;
}

int main() {
    // Calling the incrementCounter function multiple times
    incrementCounter();
    incrementCounter();
    incrementCounter();
    return 0;
}
