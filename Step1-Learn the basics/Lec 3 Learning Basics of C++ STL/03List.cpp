#include<iostream>
#include <list> // for std::list
using namespace std;

int main(){
    list<int> mylist = {1,2,3,4,5};
    cout << "Elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }
    cout << endl;

    // Adding an element to the list
    mylist.push_back(6);
    cout << "After push back an element, elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }

    mylist.push_front(0);
    cout << "\nAfter push front an element, elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }
    cout << endl;

    mylist.insert(mylist.begin(), -1);
    cout << "After inserting -1 at the beginning, elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }

    // Removing an element from the list
    mylist.pop_back();
    mylist.pop_front();
    cout << "After pop back and pop front, elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }
    cout << endl;

    // Basic operations on the list
    cout << "The front element of the list: " << mylist.front() << endl;
    cout << "The last element of the list: " << mylist.back() << endl;
    cout << "The size of the list: " << mylist.size() << endl;
    cout << "Is the list empty? " << (mylist.empty() ? "Yes" : "No") << endl;
    cout << "Clearing the list." << endl;
    mylist.clear();
    cout << "After clearing, is the list empty? " << (mylist.empty() ? "Yes" : "No") << endl;
    cout << endl;
    cout << "Final elements in the list: ";
    for(auto it= mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << ",";
    }
    cout << endl;
    return 0;

}