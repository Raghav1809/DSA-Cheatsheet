#include<iostream>
using namespace std;

void primeCheck(int n){
    int flag = 0;
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << "Your entered number" << n << " is not prime";
    }
    else{
        cout <<"Your entered number "<< n << " is prime";
    }
}

int main(){
    int n;
    cin >> n;
    primeCheck(n);
    return 0;
}