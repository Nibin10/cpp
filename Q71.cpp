// "Bit-wise arithmetic: 
// a. Implement a program to count the number of set bits in a given integer using bit-wise operations. 



#include <iostream>
using namespace std;

int countSetBits(int number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int setBitsCount = countSetBits(number);
    cout << "Number of set bits in " << number << ": " << setBitsCount << endl;

    return 0;
}
