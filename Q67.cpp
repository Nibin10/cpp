// b. Implement a program to calculate the grade of a student based on marks obtained using conditional statements. 

#include <iostream>
using namespace std;

int main() {
    int marks;
    
    cout << "Enter the marks obtained: ";
    cin >> marks;
    
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }
    
    return 0;
}
