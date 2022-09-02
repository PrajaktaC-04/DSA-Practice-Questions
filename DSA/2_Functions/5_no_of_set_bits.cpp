#include <bits/stdc++.h>
using namespace std;

int set_bits(int n)
{
    int count = 0;
    while(n)
    {
        int bit = n & 1;
        if(bit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter a and b." << endl;
    cin >> a >> b;

    int set_a = set_bits(a);
    int set_b = set_bits(b);

    cout << "Set bits in a: " << set_a << endl; 
    cout << "Set bits in b: " << set_b << endl; 
    return 0;
}