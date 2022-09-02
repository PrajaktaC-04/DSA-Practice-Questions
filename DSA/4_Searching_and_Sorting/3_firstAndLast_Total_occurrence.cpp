// Worst  Case: O(log n)

#include <bits/stdc++.h>
using namespace std;

int first_occurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return ans;
}

int last_occurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return ans;
}

pair<int, int> firstAndLastPosition(int arr[], int n, int key)
{
    pair<int, int> ans;
    ans.first = first_occurrence(arr, n, key);
    ans.second = last_occurrence(arr, n, key);
    return ans;
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter the size of array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array(in incresing order)." << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key." << endl;
    cin >> key;

    pair<int, int> ans = firstAndLastPosition(arr, n, key);

    int total_occurrences = ans.second - ans.first + 1;

    // if(ans == -1)
    // {
    //     cout << key << " is not found." << endl;
    // }
    // else
    // {
        cout << "First occurrence of " << key << " is at index " << ans.first << "." << endl;
        cout << "Last occurrence of " << key << " is at index " << ans.second << "." << endl;
        cout << "Total occurrences of " << key << " are " << total_occurrences << "." << endl;
    // }

    return 0;
}