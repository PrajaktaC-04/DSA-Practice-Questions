#include <bits/stdc++.h>
using namespace std;

bool evenOdd(int n)
{
    int a = n % 2;
    if(a == 0)
    {
        return true;
    }
    else if(a == 1)
    {
        return false;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number." << endl;
    cin >> n;
    
    int ans = evenOdd(n);
    if(ans == true)
    {
        cout << n << " is even." << endl;
    }
    else if (ans == false)
    {
        cout << n << " is odd." << endl;
    }
    return 0;
}