#include<iostream>
using namespace std;

// Bubble sort execution
void bubbleSort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i< n-1; i++){
        for(j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
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

    bubbleSort(arr,n);
    return 0;
}