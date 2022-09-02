#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;
    return ans;
}

int main()
{
    int n, r;

    cout << "Enter n and r." << endl;
    cin >> n >> r;

    int ans = nCr(n, r);
    cout << "The answer is " << ans << "." << endl;
    return 0;
}