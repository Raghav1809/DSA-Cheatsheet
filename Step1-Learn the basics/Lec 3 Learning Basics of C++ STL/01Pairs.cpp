// What is pair ? std::pair is a container 
// that holds two values together.The two values can be of different types,
//  and they are accessed as.first and.second.

#include <iostream>
#include <utility> // for std::pair
using namespace std;

void explainPair(){
    // Creating a pair of int 
    pair<int, int> pr = {10,20};
    cout << "First element of the pair: "<<pr.first << " Second element of the pair: "<<pr.second << endl;
}

int main(){
    explainPair();
    return 0;
}