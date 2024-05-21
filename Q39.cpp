// a. Write a program to swap the values of two variables using pass by reference. 
// b. Implement a function to modify an array passed as an argument using pass by reference. 
// c. Develop a program to calculate the sum and product of two numbers using pass by value and pass by reference separately. 
// d. Create a function that takes a pointer to a structure and modifies its members. 
// e. Write a program to reverse a string using pass by reference."

#include <iostream>

// Function to modify an array using pass by reference
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Double each element of the array
    }
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    std::cout << "Before modification:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Call the modifyArray function
    modifyArray(arr, size);

    std::cout << "After modification:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
