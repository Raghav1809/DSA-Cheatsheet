#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int temp;
    for(int i = 0; i< n-1; i++){
        for(int j = i+1; j< n; j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Final result is :- ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
   int n;
    cin >> n;
    int arr[n];
    // Accessing the elements of array
    for(int i = 0; i < n; i++){
            cin >> arr[i];
    }
    // Printing the original array
    cout << "Original array is :- ";
    for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr,n);
    return 0;
}