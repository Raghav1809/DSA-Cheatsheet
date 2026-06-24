#include<iostream>
#include<deque> // for std::deque
using namespace std;

void explainDeque(){
    // Creating a deque of integers
    deque<int> dq;

    // Adding elements to the deque
    dq.push_back(3);
    dq.push_back(7);
    dq.push_front(1);

    // Displaying elements in the deque
    cout << "Elements in deque are :- ";

    for(auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Accessing front and back elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Removing elements from the deque
    dq.pop_front(); // removes 1
    dq.pop_back();  // removes 7
    cout << "After popping front and back, elements in deque are: ";
    for(auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Checking size and emptiness
    cout << "Size of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // Clearing the deque
    dq.clear();
    cout << "After clearing, is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // Final state of the deque
    cout << "Final elements in deque: ";
    for(auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    explainDeque();
    return 0;
}