// Write a program to implement a bubble sort algorithm and measure its time complexity for different input sizes."

#include <iostream>
#include <chrono>
#include <random>

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to generate random array of given size
void generateRandomArray(int arr[], int n) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 1000); // Range of random numbers

    for (int i = 0; i < n; i++) {
        arr[i] = dis(gen);
    }
}

int main() {
    int n; // Input size
    std::cout << "Enter input size: ";
    std::cin >> n;

    int arr[n];

    // Generate random array
    generateRandomArray(arr, n);

    // Measure execution time
    auto start = std::chrono::high_resolution_clock::now();

    // Perform Bubble Sort
    bubbleSort(arr, n);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Time taken: " << duration.count() << " seconds\n";

    return 0;
}
