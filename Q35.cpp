// d. Create a program to print all prime numbers within a given range using nested loops. 
#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    std::cout << "Prime numbers within the range [" << start << ", " << end << "] are:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int start, end;
    std::cout << "Enter the range (start end): ";
    std::cin >> start >> end;

    printPrimesInRange(start, end);

    return 0;
}
