// Given power of given number.

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for(int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int base, index;

    cout << "Enter the base." << endl;
    cin >> base;

    cout << "Enter the index." << endl;
    cin >> index;

    int ans = power(base, index);
    cout << "The answer is " << ans << "." << endl;
    return 0;
}