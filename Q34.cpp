// c. Develop a program that finds the largest and smallest elements in an array using a loop. 

#include <iostream>

int main() {
    const int size = 5; // Define the size of the array
    int arr[size]; // Declare an array of integers
    int smallest, largest;

    // Input elements into the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Assume the first element is both the smallest and largest
    smallest = largest = arr[0];

    // Find the smallest and largest elements
    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the smallest and largest elements
    std::cout << "Smallest element: " << smallest << std::endl;
    std::cout << "Largest element: " << largest << std::endl;

    return 0;
}
