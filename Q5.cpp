// Create a generic lambda that takes a pair of iterators and computes the sum of elements within the range.
#include <iostream>
#include <numeric>
#include<vector>

int main() {
    // Example usage with a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Define a lambda for computing the sum within a range
    auto computeSum = [](auto start, auto end) {
        return std::accumulate(start, end, 0);
    };

    // Example usage
    auto sum = computeSum(numbers.begin(), numbers.end());
    std::cout << "Sum of elements in the range: " << sum << std::endl;

    return 0;
}
