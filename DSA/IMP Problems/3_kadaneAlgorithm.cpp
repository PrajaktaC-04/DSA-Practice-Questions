#include <bits/stdc++.h>
using namespace std;

class KadaneAlgorithm
{
    public:
    int maxSubarraySum(int a[], int n)
    {
        int ma = INT_MIN;
        int max_tillHere = 0;
        for(int i = 0; i < n; i++)
        {
            max_tillHere = max_tillHere + a[i];
            if(max_tillHere > ma)
            {
                ma = max_tillHere;
            }
            if(max_tillHere < 0)
            {
                max_tillHere = 0;
            }
        }
        return ma;
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    KadaneAlgorithm k;
    int ans = k.maxSubarraySum(arr, n);
    cout << ans << endl;
    return 0;
}