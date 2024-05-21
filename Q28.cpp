// a. Implement a custom memory allocator using malloc and free functions. 
#include <iostream>
#include <cstdlib>

class CustomAllocator {
public:
    void* allocate(size_t size) {
        return malloc(size);
    }

    void deallocate(void* ptr) {
        free(ptr);
    }
};

int main() {
    CustomAllocator allocator;

    // Allocate memory
    int* ptr = static_cast<int*>(allocator.allocate(5 * sizeof(int)));

    // Check if memory is allocated
    if (ptr == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    // Use allocated memory
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }

    // Print allocated memory
    for (int i = 0; i < 5; ++i) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory
    allocator.deallocate(ptr);

    return 0;
}
