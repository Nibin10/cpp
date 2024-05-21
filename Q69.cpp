// d. Create a program to classify a triangle based on its sides and angles using conditional statements. 

#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check if it forms a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Check if it is equilateral
        if (side1 == side2 && side2 == side3) {
            cout << "It is an equilateral triangle." << endl;
        }
        // Check if it is isosceles
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It is an isosceles triangle." << endl;
        }
        // Check if it is scalene
        else {
            cout << "It is a scalene triangle." << endl;
        }

        // Check if it is right-angled
        if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1) {
            cout << "It is also a right-angled triangle." << endl;
        }
        // Check if it is obtuse-angled
        else if (side1 * side1 + side2 * side2 < side3 * side3 ||
                 side1 * side1 + side3 * side3 < side2 * side2 ||
                 side2 * side2 + side3 * side3 < side1 * side1) {
            cout << "It is also an obtuse-angled triangle." << endl;
        }
        // If it's not right-angled or obtuse-angled, it must be acute-angled
        else {
            cout << "It is also an acute-angled triangle." << endl;
        }
    } else {
        cout << "The given side lengths do not form a valid triangle." << endl;
    }

    return 0;
}
