// Write a generic lambda that performs a binary search on a sorted container and returns true if the element is found.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Example usage with a sorted vector of integers
    std::vector<int> sortedVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Define a lambda for binary search
    auto binarySearch = [](const auto& container, const auto& value) {
        return std::binary_search(container.begin(), container.end(), value);
    };

    // Example usage
    int target = 6;
    if (binarySearch(sortedVec, target)) {
        std::cout << "Element " << target << " found in the vector.\n";
    } else {
        std::cout << "Element " << target << " not found in the vector.\n";
    }

    return 0;
}
