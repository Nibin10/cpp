// e. Write a program to check the parity of a number using bit-wise operations."

#include <iostream>
using namespace std;

bool checkParity(int number) {
    // XOR all the bits of the number
    // The result will be 1 if the number of set bits is odd, otherwise 0
    int parity = 0;
    while (number) {
        parity ^= number & 1;
        number >>= 1;
    }
    return parity;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (checkParity(num)) {
        cout << num << " has odd parity." << endl;
    } else {
        cout << num << " has even parity." << endl;
    }

    return 0;
}
