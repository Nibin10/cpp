//  Implement a custom memory allocator using malloc and free functions. 
#include <stdio.h>
#include <stdlib.h>

#define MEMORY_POOL_SIZE 1000

typedef struct {
    char data[MEMORY_POOL_SIZE];
    int index;
} MemoryPool;

MemoryPool memory_pool;

void initializeMemoryPool() {
    memory_pool.index = 0;
}

void *customMalloc(size_t size) {
    if (memory_pool.index + size > MEMORY_POOL_SIZE) {
        fprintf(stderr, "Error: Out of memory\n");
        return NULL;
    }
    
    void *ptr = &(memory_pool.data[memory_pool.index]);
    memory_pool.index += size;
    return ptr;
}

void customFree(void *ptr) {
    // Freeing memory in a simple allocator like this doesn't do much.
    // In a more complex allocator, you might want to mark memory blocks as free.
}

int main() {
    // Initialize memory pool
    initializeMemoryPool();
    
    // Allocate memory
    int *ptr1 = (int *)customMalloc(sizeof(int));
    if (ptr1 != NULL) {
        *ptr1 = 10;
        printf("Allocated memory: %d\n", *ptr1);
    }
    
    // Allocate more memory
    char *ptr2 = (char *)customMalloc(10 * sizeof(char));
    if (ptr2 != NULL) {
        printf("Allocated memory for string\n");
    }
    
    // Free memory (not much to do here in this simple implementation)
    customFree(ptr1);
    customFree(ptr2);
    
    return 0;
}
