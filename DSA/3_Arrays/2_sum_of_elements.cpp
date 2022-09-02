#include <bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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

    int sum = array_sum(arr, n);
    cout << "The sum of all elements in array is " << sum << endl;
    return 0;
}