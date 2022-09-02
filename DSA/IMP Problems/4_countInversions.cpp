#include <bits/stdc++.h>
using namespace std;

class countInversions
{
    public:
    int merge(int a[], int temp[], int left, int mid, int right)
    {
        int i = left, j = mid, k = left;
        int inv = 0;
        while((i <= mid-1) && (j <= right))
        {
            if(a[i] <= a[j])
            {
                temp[k++] = a[i++];
            }
            else
            {
                temp[k++] = a[j++];
                inv = inv + (mid - i);
            }
        }
        while(i <= mid-1)
        {
            temp[k++] = a[i++];
        }
        while(j <= right)
        {
            temp[k++] = a[j++];
        }
        for(int m = left; m <= right; m++)
        {
            a[m] = temp[m];
        }
        return inv;
    }

    int mergeSort(int a[], int temp[], int left, int right)
    {
        int inv = 0;
        if(left < right)
        {
            int mid = (left + right)/2;
            inv = inv + mergeSort(a, temp, left, mid);
            inv = inv + mergeSort(a, temp, mid+1, right);
            inv = inv + merge(a, temp, left, mid+1, right);
        }
        return inv;
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
    int temp[n];
    countInversions c;
    int ans = c.mergeSort(arr, temp, 0, n-1);
    cout << ans << endl;
    return 0;
}