// GCD Find of 2 numbers using Euclidean Algorithm
#include<iostream>
using namespace std;

void euclideanAlgo(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        cout <<"The GCD of 2 numbers is " <<b;
    }
    else{
        cout << "The GCD of 2 numbers is " << a;
    }
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    euclideanAlgo(n1, n2);
    return 0;
}