// Sum of first N numbers using parameterized function
#include<iostream>
using namespace std;

void f(int n, int sum){
   if(n==0){
        cout << sum;
        return;
   }
   sum+=n;
   f(n-1,sum);
}

int main(){
    int n;
    cin >> n;
    f(n,0);
}