#include <iostream>
#include <cmath> // for pow()
using namespace std;

void ArmstrongCheck(int n){
    int dup = n, count = 0, arm = 0;

    // Count number of digits
    int temp = n;
    while(temp > 0){
        count++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power 'count'
    temp = n;
    while(temp > 0){
        int ld = temp % 10;
        arm += pow(ld, count); // ld^count
        temp /= 10;
    }

    if(arm == dup){
        cout << dup << " is an Armstrong number";
    } else {
        cout << dup << " is not an Armstrong number";
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    ArmstrongCheck(n);
    return 0;
}
