// Counting the frequencies of the numbers in array using Hashing technique
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int hash[100000];
    for(int i = 0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin >> q;
    int num;
    while(q > 0){
        cin >> num;
        cout <<num << ":- "<< hash[num] << endl;
        q--;
    }
    return 0;
}