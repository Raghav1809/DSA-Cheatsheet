#include <iostream>
#include <queue> // for std::queue
using namespace std;

// Function to display the queue without modifying the original
void displayQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void explainQueue() {
    queue<int> q;

    // ✅ Adding elements to the queue
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
    }

    cout << "Elements in the queue after adding 1 to 5: ";
    displayQueue(q);  // Use copy to preserve original

    // ✅ Re-adding elements for further demonstration
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
    }

    // ✅ Front and Back
    cout << "Front element of the queue: " << q.front() << endl;
    cout << "Back element of the queue: " << q.back() << endl;

    // ✅ Size
    cout << "Size of the queue: " << q.size() << endl;

    // ✅ Check if queue is empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // ✅ Removing all elements
    while (!q.empty()) {
        cout << "Removing front element: " << q.front() << endl;
        q.pop();
    }

    // ✅ Final check
    cout << "After clearing, is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;
}

int main() {
    explainQueue();
    return 0;
}
