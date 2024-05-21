// a. Write a program to generate the Fibonacci sequence up to a given number using a loop. 
// c. Develop a program that finds the largest and smallest elements in an array using a loop. 
// d. Create a program to print all prime numbers within a given range using nested loops. 
// e. Write a program to implement a bubble sort algorithm and measure its time complexity for different input sizes."

#include <iostream>

void generateFibonacci(int n) {
    int prev = 0;
    int curr = 1;

    std::cout << "Fibonacci sequence up to " << n << ":" << std::endl;

    while (prev <= n) {
        std::cout << prev << " ";

        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number up to which you want to generate the Fibonacci sequence: ";
    std::cin >> n;

    generateFibonacci(n);

    return 0;
}
