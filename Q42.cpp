// a. Create a base class ""Shape"" with virtual functions to calculate area and perimeter, and derive classes like ""Rectangle"" and ""Circle"" from it. 
#include <iostream>

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() const = 0;

    // Virtual function to calculate perimeter
    virtual double calculatePerimeter() const = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of calculateArea for Rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Implementation of calculatePerimeter for Rectangle
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementation of calculateArea for Circle
    double calculateArea() const override {
        return 3.14159 * radius * radius; // Using pi as approximately 3.14159
    }

    // Implementation of calculatePerimeter for Circle
    double calculatePerimeter() const override {
        return 2 * 3.14159 * radius; // Using pi as approximately 3.14159
    }
};

int main() {
    // Creating objects of Rectangle and Circle
    Rectangle rectangle(4, 5);
    Circle circle(3);

    // Calculating area and perimeter of Rectangle
    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    // Calculating area and perimeter of Circle
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Circle Perimeter: " << circle.calculatePerimeter() << std::endl;

    return 0;
}
