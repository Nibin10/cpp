// d. Create a program to implement a stack using the STL stack container and perform stack operations. 
#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Define a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    // Print the top element of the stack
    cout << "Top element of the stack: " << myStack.top() << endl;

    // Pop elements from the stack
    cout << "Popping elements from the stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    // Check if the stack is empty after popping
    if (myStack.empty()) {
        cout << "The stack is empty." << endl;
    } else {
        cout << "The stack is not empty." << endl;
    }

    return 0;
}
