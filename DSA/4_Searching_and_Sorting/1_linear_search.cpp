// Worst Case: O(n)

#include <bits/stdc++.h>
using namespace std;

pair<bool, int> linear_search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return {true, i};
    }
    return {false, -1};
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter the size of array." << endl;
    cin >> n;

    int key;

    int arr[n];
    cout << "Enter the elements in array." << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key." << endl;
    cin >> key;

    pair<bool, int> ans = linear_search(arr, n, key);
    if(ans.first)
    {
        cout << "Yes, it is present at index " << ans.second << endl;
    }
    else
    {
        cout << "No, it is not present." << endl;
    }
    return 0;
}