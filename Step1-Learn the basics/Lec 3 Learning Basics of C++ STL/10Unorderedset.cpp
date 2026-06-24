#include <iostream>
#include <unordered_set>
using namespace std;

void explainUnorderedSet()
{
    // Creating an unordered set of integers
    unordered_set<int> us = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 2, 8, 3, 0, 1, 2, 9};
    cout << "Elements in the unordered set: ";
    for (const auto &elem : us)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Adding elements to the unordered set
    us.insert(11);
    us.insert(12);
    cout << "After inserting 11 and 12, elements in the unordered set: ";
    for (const auto &elem : us)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Removing an element from the unordered set
    us.erase(5);
    cout << "After erasing one occurrence of 5, elements in the unordered set: ";
    for (const auto &elem : us)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Checking if an element exists
    int check = 3;
    cout << "Does the unordered set contain " << check << "? "
         << (us.count(check) ? "Yes" : "No") << endl;

    check = 15;
    cout << "Does the unordered set contain " << check << "? "
         << (us.count(check) ? "Yes" : "No") << endl;

    // Size of the unordered set
    cout << "Size of the unordered set: " << us.size() << endl;

    // Checking if the unordered set is empty
    cout << "Is the unordered set empty? "
         << (us.empty() ? "Yes" : "No") << endl;

    // Clearing the unordered set
    us.clear();

    cout << "After clearing, is the unordered set empty? "
         << (us.empty() ? "Yes" : "No") << endl;
}

int main()
{
    explainUnorderedSet();
    return 0;
}