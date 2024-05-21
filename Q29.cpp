// Develop a program that dynamically resizes an array when it reaches its capacity. 

#include <iostream>

class DynamicArray {
private:
    int* arr;        // Pointer to the dynamically allocated array
    int capacity;    // Current capacity of the array
    int size;        // Current number of elements in the array

public:
    // Constructor
    DynamicArray(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        arr = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;
    }

    // Function to add an element to the array
    void add(int element) {
        // Check if the array is full, resize if necessary
        if (size == capacity) {
            resize();
        }
        arr[size++] = element;
    }

    // Function to resize the array
    void resize() {
        capacity *= 2;                          // Double the capacity
        int* newArr = new int[capacity];        // Create a new array with the new capacity
        for (int i = 0; i < size; ++i) {        // Copy elements from the old array to the new one
            newArr[i] = arr[i];
        }
        delete[] arr;                            // Delete the old array
        arr = newArr;                            // Update the pointer to point to the new array
    }

    // Function to display the elements of the array
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray arr;

    // Add elements to the array
    for (int i = 0; i < 20; ++i) {
        arr.add(i);
    }

    // Display the elements
    arr.display();

    return 0;
}
