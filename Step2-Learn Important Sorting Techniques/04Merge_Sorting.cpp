#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge(vector<int>& arr, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        // Merge the two sorted halves
        while (left <= mid && right <= high) {

            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Copy remaining elements of left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements of right half
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy back to original array
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& arr, int low, int high) {

        // Base Case
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        // Sort left half
        mergeSort(arr, low, mid);

        // Sort right half
        mergeSort(arr, mid + 1, high);

        // Merge sorted halves
        merge(arr, low, mid, high);
    }
};

int main() {

    vector<int> arr = {6, 3, 9, 5, 2, 8};

    Solution obj;

    obj.mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}