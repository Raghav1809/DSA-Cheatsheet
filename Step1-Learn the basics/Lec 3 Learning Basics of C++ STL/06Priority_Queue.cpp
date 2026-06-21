#include<iostream>
#include<queue> // for std::priority_queue
using namespace std;

// Function to display the priority queue without modifying the original
void displayPriorityQueue(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

// Function that explains all the operations on priority queue
void explainPriorityQueue() {
    // Creating a priority queue of integers (Max-Heap by default)
    priority_queue<int> pq;

    // Pushing elements into the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(5);
    pq.push(30);
    pq.push(25);

    cout << "Elements in the priority queue (Max-Heap): ";
    displayPriorityQueue(pq); // Will show elements in descending order (highest priority first)

    // Accessing the top (maximum) element
    cout << "Top element of the priority queue: " << pq.top() << endl;

    // Removing the top element
    pq.pop();
    cout << "After popping the top element, new top is: " << pq.top() << endl;

    // Checking size of the queue
    cout << "Size of the priority queue: " << pq.size() << endl;

    // Checking if the priority queue is empty
    cout << "Is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // Clearing the queue
    while (!pq.empty()) {
        cout << "Removing top element: " << pq.top() << endl;
        pq.pop();
    }

    cout << "After clearing, is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;
}

// Main function
int main() {
    explainPriorityQueue();
    return 0;
}
