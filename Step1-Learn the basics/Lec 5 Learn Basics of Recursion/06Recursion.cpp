// Calculate the factorial of N numbers
#include<iostream>
using namespace std;

void fact(int n, int fac){
    if(n == 0){
        cout << fac;
        return;
    }
    fac *= n;
    fact(n-1, fac);
}

int main(){
    int n;
    cin >> n;
    fact(n, 1);
    return 0;
}