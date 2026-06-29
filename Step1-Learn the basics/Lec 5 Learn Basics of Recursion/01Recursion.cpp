// Understand recursion by print something N times
#include<iostream>
using namespace std;

int count = 1;
void recfun(){
    cout << count << endl;
    count++;
    if(count == 5){
        return;
    }
    else{
        recfun();
    }
}
int main(){
    recfun();
    return 0;
}