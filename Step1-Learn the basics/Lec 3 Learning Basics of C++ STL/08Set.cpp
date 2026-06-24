#include<iostream>
#include<set> // for std::set
using namespace std;

void explainSet(){
    // Creating a set of integers
    set<int> myset = {1,7,3,7,4,0,1,2,5,6,8,9,10};
    cout << "Elements in the set: ";
    for(auto it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Adding an element to the set
    myset.insert(11);
    myset.insert(12);
    cout << "After inserting 11 and 12, elements in the set: ";
    for(auto it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Removing an element from the set
    myset.erase(5);
    cout << "After erasing 5, elements in the set: ";
    for(auto it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Checking if an element exists
    int check = 3;
    cout << "Does the set contain " << check << "? " << (myset.count(check) ? "Yes" : "No") << endl;
    check = 15;
    cout << "Does the set contain " << check << "? " << (myset.count(check) ? "Yes" : "No") << endl;

    // Accessing the first and last elements
    cout << "First element in the set: " << *myset.begin() << endl;
    cout << "Last element in the set: " << *prev(myset.end()) << endl;

    // Size of the set
    cout << "Size of the set: " << myset.size() << endl;

    // Checking if the set is empty
    cout << "Is the set empty? " << (myset.empty() ? "Yes" : "No") << endl;

    // Clearing the set
    myset.clear();

    cout << "After clearing, is the set empty? " << (myset.empty() ? "Yes" : "No") << endl;
    cout << "Final elements in the set: ";
    for(auto it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    explainSet();
    return 0;
}