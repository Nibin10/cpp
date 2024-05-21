// e. Write a program to calculate the circumference of a circle using a constexpr function."
#include <iostream>

constexpr double PI = 3.14159; // Constant expression for pi

// constexpr function to calculate the circumference of a circle
constexpr double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    constexpr double radius = 5.0; // Change the radius of the circle

    // Calculate and print the circumference of the circle
    std::cout << "The circumference of the circle with radius " << radius << " is: " << calculateCircumference(radius) << std::endl;

    return 0;
}
