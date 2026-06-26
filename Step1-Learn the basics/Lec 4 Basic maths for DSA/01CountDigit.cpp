#include<iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n>0){
        n = n / 10;
        count ++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int count = countDigit(n);
    cout << "The number is " << n << " and the digit it contains are " << count << endl;
    return 0;
}