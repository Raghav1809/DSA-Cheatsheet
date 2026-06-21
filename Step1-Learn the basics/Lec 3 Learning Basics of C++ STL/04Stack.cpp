#include <iostream>
#include <stack> // for std::stack
using namespace std;

void displayStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void explainStack() {
    stack<int> st;

    // ✅ Push elements
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Elements in the stack after pushing 1, 2, 3: ";
    displayStack(st);

    // ✅ Pushing again to demonstrate pop safely
    st.push(1);
    st.push(2);
    st.push(3);

    // ✅ Pop top element
    st.pop(); // removes 3
    cout << "After popping the top element: ";
    displayStack(st);

    // ✅ Check if stack is empty
    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    // ✅ Size and top
    st.push(4);
    st.push(5);
    cout << "Size of the stack: " << st.size() << endl;
    cout << "Top element: " << st.top() << endl;

    // ✅ Clear the stack
    while (!st.empty()) st.pop();

    cout << "After clearing, is the stack empty? " << (st.empty() ? "Yes" : "No") << endl;
}

int main() {
    explainStack();
    return 0;
}
