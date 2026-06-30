// Print 1 to N using recursion
#include<iostream>
using namespace std;

void f1(int start, int end){
    if(start > end){
        return;
    }
    cout << start << endl;
    f1(start+1, end);
}

void f2(int end, int start){
    if(end < start){
        return;
    }
    cout << end << endl;
    f2(end-1,start);
}


int main()
{
    int n;
    cin >> n;
    int ch;
    cin >> ch;
    if(ch ==1){
        f1(1,n);
    }
    if(ch == 2){
        f2(n,1);
    }
   
    return 0;
}