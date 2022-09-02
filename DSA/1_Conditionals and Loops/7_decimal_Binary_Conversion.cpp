#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    // decimal to binary 
    // while(n)
    // {
    //     int bit = n & 1;

    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
        
    //     i++;
    // }
    // cout << ans << endl;

    // binary to decimal
    while(n)
    {
        int digit = n % 10;

        if(digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }

    cout << ans << endl;
    return 0;
}