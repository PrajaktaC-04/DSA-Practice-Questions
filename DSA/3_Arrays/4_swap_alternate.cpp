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

void swap_alternate(int arr[], int n)
{
    for(int i = 0; i < n; i += 2)
    {
        if((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
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

    swap_alternate(arr, n);
    cout << "The output is: " << endl;
    printArray(arr, n);

    return 0;
}