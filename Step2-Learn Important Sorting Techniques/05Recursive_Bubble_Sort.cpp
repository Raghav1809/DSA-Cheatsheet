#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& arr, int n) {
        if (n == 1)
            return;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }

        bubbleSort(arr, n - 1);
    }
};

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    Solution obj;
    obj.bubbleSort(arr, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}