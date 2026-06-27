#include <iostream>
using namespace std;

void CountAllDivision(int n)
{
    cout << "The number " << n << " is divisible by ";
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ",";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    CountAllDivision(n);
    return 0;
}