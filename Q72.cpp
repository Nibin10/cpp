// b. Write a program to swap two numbers using bit-wise XOR operation. 

#include <iostream>
using namespace std;

void swapNumbers(int& num1, int& num2) {
    // XOR operation to swap numbers without using a temporary variable
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Before swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
