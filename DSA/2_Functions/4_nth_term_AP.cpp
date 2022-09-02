#include <bits/stdc++.h>
using namespace std;

int nth_term(int n)
{
    int ans = ((3 * n) + 7);
    return ans;
}

int main()
{
    int n;
    cout << "Enter n." << endl;
    cin >> n;

    cout << endl;
    int ans = nth_term(n);
    cout << ans << endl;
    return 0;
}