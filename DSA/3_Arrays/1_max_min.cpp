#include <bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(int arr[], int n)
{
    int min_element = INT_MAX;
    int max_element = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        max_element = max(max_element, arr[i]);
        min_element = min(min_element, arr[i]);
    }

    return {min_element, max_element};
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter the size of array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array." << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> ans = getMinMax(arr, n);
    cout << "The minimum element in array is " << ans.first << " and the maximum element in array is " << ans.second << endl;
    return 0;
}