// d. Create a program that demonstrates the use of thread-local storage class. 
#include <iostream>
#include <thread>

// Function to demonstrate thread-local storage
void threadFunction() {
    // Thread-local variable declaration
    thread_local int localVar = 0;

    // Increment and print the thread-local variable
    localVar++;
    std::cout << "Thread ID: " << std::this_thread::get_id() << ", LocalVar: " << localVar << std::endl;
}

int main() {
    // Create multiple threads
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);
    std::thread t3(threadFunction);

    // Join the threads with the main thread
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
