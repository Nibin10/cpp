// Develop a program that swaps the elements of two arrays using pointers without using any temporary variable. 

#include <iostream>

// Function to swap elements of two arrays using pointers
void swap_arrays(int* array1, int* array2, int size) {
    for (int i = 0; i < size; ++i) {
        // Swap elements without using a temporary variable
        array1[i] ^= array2[i];
        array2[i] ^= array1[i];
        array1[i] ^= array2[i];
    }
}

// Function to print an array
void print_array(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example arrays
    const int size = 5;
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {6, 7, 8, 9, 10};

    // Print original arrays
    std::cout << "Original arrays:" << std::endl;
    std::cout << "Array 1: ";
    print_array(array1, size);
    std::cout << "Array 2: ";
    print_array(array2, size);

    // Swap arrays
    swap_arrays(array1, array2, size);

    // Print swapped arrays
    std::cout << "\nArrays after swapping:" << std::endl;
    std::cout << "Array 1: ";
    print_array(array1, size);
    std::cout << "Array 2: ";
    print_array(array2, size);

    return 0;
}
