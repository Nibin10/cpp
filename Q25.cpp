// Create a function that takes an array of integers and rearranges the elements such that all even numbers come before all odd numbers.
#include <iostream>

void rearrange_even_odd(int* arr, int size) {
    int left = 0; // Index for the leftmost even element

    // Iterate through the array
    for (int i = 0; i < size; ++i) {
        // If the current element is even, swap it with the leftmost even element
        if (arr[i] % 2 == 0) {
            std::swap(arr[i], arr[left]);
            ++left; // Increment left index
        }
    }
}

void print_array(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Original array:" << std::endl;
    print_array(arr, sizeof(arr) / sizeof(arr[0]));

    // Rearrange the array
    rearrange_even_odd(arr, sizeof(arr) / sizeof(arr[0]));

    std::cout << "Array after rearrangement:" << std::endl;
    print_array(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
