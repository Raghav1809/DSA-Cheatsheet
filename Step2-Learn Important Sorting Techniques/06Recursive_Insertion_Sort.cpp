#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr, int i, int n) {
        if (i == n)
            return;

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }

        insertionSort(arr, i + 1, n);
    }
};

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};

    Solution obj;
    obj.insertionSort(arr, 1, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}