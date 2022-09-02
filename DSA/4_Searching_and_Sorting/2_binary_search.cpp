// Worst  Case: O(log n)

#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)                        
{
    int start = 0, end = n - 1;
    int mid = (start + (end - start) / 2);

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
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
    return -1;
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

    int ans = binary_search(arr, n, key);

    if(ans == -1)
    {
        cout << key << " is not found." << endl;
    }
    else
    {
        cout << key << " is found at index " << ans << "." << endl;
    }

    return 0;
}


// int first_occurrence(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1;
//     int mid = (start + (end - start) / 2);
//     int ans;

//     while(start <= end)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start + (end - start) / 2);
//     }
//     return ans;
// }