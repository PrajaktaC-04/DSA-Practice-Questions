// A program to check the number is prime or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int i = 2;
    // while(i < n)
    // {
    //     if(n % i == 0)
    //     {
    //         cout << "Not prime" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Prime" << endl;
    //         break;
    //     }
    //     i++;
    // }

    bool isPrime = 1;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }
    return 0;
}