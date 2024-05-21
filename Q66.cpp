// "Conditional statements: 
// a. Write a program to determine the eligibility of a person to vote based on age using conditional statements. 

#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }
    
    return 0;
}
