// Implement a generic lambda that takes a container of any type and returns the maximum element within it.
#include <iostream>
#include <algorithm>
#include<vector>

int main() {
    // Example usage with a vector of doubles
    std::vector<double> values = {3.14, 2.71, 1.618, 2.718};

    // Define a lambda for finding the maximum element
    auto findMax = [](const auto& container) {
        return *std::max_element(container.begin(), container.end());
    };

    // Example usage
    std::cout << "Maximum element in the vector: " << findMax(values) << std::endl;

    return 0;
}
