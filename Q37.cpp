// a. Write a program to swap the values of two variables using pass by reference. 

#include <iostream>

// Function to swap two variables using pass by reference
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    std::cout << "Before swapping:\n";
    std::cout << "x = " << x << ", y = " << y << std::endl;

    // Call the swap function
    swap(x, y);

    std::cout << "After swapping:\n";
    std::cout << "x = " << x << ", y = " << y << std::endl;

    return 0;
}
