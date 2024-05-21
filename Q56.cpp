// "Constant expressions: 
// a. Write a program to calculate the area of a circle using a constant expression for pi. 


#include <iostream>

constexpr double PI = 3.14159; // Constant expression for pi

// Function to calculate the area of a circle
double calculateArea(double radius) { return PI * radius * radius; }

int main() {
    double radius = 5.0; // Change the radius of the circle

    // Calculate and print the area of the circle
    std::cout << "The area of the circle with radius " << radius << " is: " << calculateArea(radius) << std::endl;

    return 0;
}
