#include<iostream>
using namespace std;

void ReverseNumber(int n){
    cout << "The original number is "<< n << " and the reverse number is ";
    while(n>0){
        int lastdigit = n % 10;
        cout << lastdigit;
        n = n / 10;
    }
}

int main(){
    int n;
    cin >> n;
    ReverseNumber(n);
    return 0;
}