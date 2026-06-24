#include <iostream>
#include <set> // for std::multiset
using namespace std;

void explainMultiset()
{
    // Creating a multiset of integers
    multiset<int> ms = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 2, 8, 3, 0, 1, 2, 9};
    cout << "Elements in the multiset: ";
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Adding elements to the multiset
    ms.insert(11);
    ms.insert(12);
    cout << "After inserting 11 and 12, elements in the multiset: ";
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Removing an element from the multiset
    ms.erase(5);
    cout << "After erasing one occurrence of 5, elements in the multiset: ";
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Checking if an element exists
    int check = 3;
    cout << "Does the multiset contain " << check << "? " << (ms.count(check) ? "Yes" : "No") << endl;

    check = 15;
    cout << "Does the multiset contain " << check << "? " << (ms.count(check) ? "Yes" : "No") << endl;

    // Accessing the first and last elements
    cout << "First element in the multiset: " << *ms.begin() << endl;
    cout << "Last element in the multiset: " << *prev(ms.end()) << endl;

    // Size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;

    // Checking if the multiset is empty
    cout << "Is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    // Clearing the multiset
    ms.clear();

    cout << "After clearing, is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;
}

int main(){
    explainMultiset();
    return 0;
}
