#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    // Array of size 26 for 'a' to 'z'
    int hash[26] = {0};

    // Count frequency
    for (char ch : s) {
        hash[ch - 'a']++;  // hashing by subtracting ASCII of 'a'
    }

    // Print frequency
    cout << "\nCharacter frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (hash[i] > 0) {
            cout << char(i + 'a') << " -> " << hash[i] << endl;
        }
    }

    return 0;
}
