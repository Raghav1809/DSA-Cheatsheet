// Reverse the array using Recursion
#include<iostream>
using namespace std;

void revArr(int l,int arr[], int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    revArr(l+1, arr, r-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    revArr(0, arr, n-1);
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
