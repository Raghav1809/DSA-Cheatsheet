#include<iostream>
using namespace std;
#include<string>

void palindromecheck(int n){
    int dupn = n;
    int revnum = 0;
    while(n > 0){
        int last_digit = n % 10;
        revnum = (revnum * 10) + last_digit;
        n = n / 10;
    }

    if(revnum == dupn){
        cout << "The number you entered is the Palindrome";
    }
    else{
        cout << "The number you entered is not Palindrome";
    }
}

int main(){
    int n;
    cin >> n;
    palindromecheck(n);
    return 0;
}