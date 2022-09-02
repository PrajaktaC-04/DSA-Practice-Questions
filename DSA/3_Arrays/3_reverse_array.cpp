#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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

    cout << endl;
    cout << "The original array is: " << endl;
    printArray(arr, n);
    cout << endl;

    // cout << "The reversed array is: " << endl;
    // for(int i = n-1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    reverseArray(arr, n);
    cout << "The reversed array is: " << endl;
    printArray(arr, n);

    return 0;
}