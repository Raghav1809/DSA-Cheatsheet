// Print the name N times using recursion
#include<iostream>
using namespace std;

void print(int i, int n){
    if(i > n){
        return;
    }
    cout << "Raghav "<< i << endl;
    print(i+1,n);
}

int main(){
    int n;
    cin >> n;
    print(1,n);
    return 0;
}