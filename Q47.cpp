// a. Write a program to implement a priority queue using the STL priority_queue container. 

#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Define a priority queue of integers
    priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Print the elements of the priority queue
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
