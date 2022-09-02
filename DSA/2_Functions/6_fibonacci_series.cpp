#include <bits/stdc++.h>
using namespace std;

int fib_nth_term(int n)
{
    if(n == 1)
        return 0;
    else if((n == 2) || (n == 3))
        return 1;
    else
        return (fib_nth_term(n - 1) + fib_nth_term(n - 2));
}

int main()
{
    int n;
    cout << "Enter n." << endl;
    cin >> n;

    int ans = fib_nth_term(n);
    cout << "The nth term of fibonacci series is " << ans << "." << endl;
    return 0;
}