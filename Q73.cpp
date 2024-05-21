// c. Develop a program to check if a number is a power of two using bit-wise operations. 

#include <iostream>
using namespace std;

bool isPowerOfTwo(int number) {
    // A number is a power of two if it has only one bit set to 1
    // We use the property that for a power of two, the bitwise AND operation of the number and number - 1 is 0
    // For example: 8 (1000) & 7 (0111) = 0
    return (number > 0) && ((number & (number - 1)) == 0);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of two." << endl;
    } else {
        cout << number << " is not a power of two." << endl;
    }

    return 0;
}
