//Create a program to simulate memory fragmentation and implement a defragmentation algorithm. 
#include <iostream>
#include <vector>
#include <algorithm>

// Define the size of the memory array
const int MEMORY_SIZE = 100;

// Memory block structure
struct MemoryBlock {
    int id;
    int size;
    bool allocated;
};

class MemoryManager {
private:
    std::vector<MemoryBlock> memory; // Memory array
    int nextBlockId; // ID for the next memory block to be allocated

public:
    // Constructor
    MemoryManager() : nextBlockId(1) {
        // Initialize memory blocks
        for (int i = 0; i < MEMORY_SIZE; ++i) {
            memory.push_back({0, 0, false});
        }
    }

    // Function to allocate memory
    int allocate(int size) {
        // Find a contiguous block of free memory
        int start = -1;
        int count = 0;
        for (int i = 0; i < MEMORY_SIZE; ++i) {
            if (!memory[i].allocated) {
                if (start == -1) {
                    start = i;
                }
                count++;
                if (count == size) {
                    break;
                }
            } else {
                start = -1;
                count = 0;
            }
        }

        // If a suitable block is found, allocate memory
        if (start != -1 && count >= size) {
            for (int i = start; i < start + size; ++i) {
                memory[i].id = nextBlockId;
                memory[i].size = size;
                memory[i].allocated = true;
            }
            nextBlockId++;
            return nextBlockId - 1;
        } else {
            return -1; // Memory allocation failed
        }
    }

    // Function to deallocate memory
    void deallocate(int blockId) {
        for (auto& block : memory) {
            if (block.id == blockId) {
                block.id = 0;
                block.size = 0;
                block.allocated = false;
            }
        }
    }

    // Function to defragment memory
    void defragment() {
        int newIndex = 0;
        for (int i = 0; i < MEMORY_SIZE; ++i) {
            if (memory[i].allocated) {
                memory[newIndex] = memory[i];
                memory[newIndex].id = newIndex + 1;
                newIndex++;
            }
        }
        // Reset remaining blocks
        for (int i = newIndex; i < MEMORY_SIZE; ++i) {
            memory[i] = {0, 0, false};
        }
    }

    // Function to display memory state
    void display() {
        std::cout << "Memory state:" << std::endl;
        for (const auto& block : memory) {
            std::cout << "Block ID: " << block.id << ", Size: " << block.size << ", Allocated: " << (block.allocated ? "Yes" : "No") << std::endl;
        }
    }
};

int main() {
    MemoryManager memoryManager;

    // Allocate some memory blocks
    int block1 = memoryManager.allocate(10);
    int block2 = memoryManager.allocate(20);
    int block3 = memoryManager.allocate(15);

    // Display initial memory state
    memoryManager.display();

    // Deallocate block2
    memoryManager.deallocate(block2);

    // Display memory state after deallocation
    std::cout << "\nMemory state after deallocation:" << std::endl;
    memoryManager.display();

    // Defragment memory
    memoryManager.defragment();

    // Display memory state after defragmentation
    std::cout << "\nMemory state after defragmentation:" << std::endl;
    memoryManager.display();

    return 0;
}
