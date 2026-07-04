// Check that the string is palindrome or not Palindrome- MADAM
#include<iostream>
using namespace std;

bool checkPal(int i, string &s){
    if(i >=s.size() / 2){
        return true;
    }
    if(s[i] != s[s.size()-i-1]) return false;
    return checkPal(i+1, s);
}

int main(){
    string s;
    cin >> s;
    int val = checkPal(0,s);
    if(val==1) cout << "The string is palindrome";
    else cout << "The string is not palindrome";
    return 0;
}