// d. Create a program to perform addition of two integers without using arithmetic operators, only using bit-wise operations. 

#include <iostream>
using namespace std;

int add(int a, int b) {
    // Iterate until there is no carry
    while (b != 0) {
        // Carry now contains common set bits of a and b
        int carry = a & b;

        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    return 0;
}
