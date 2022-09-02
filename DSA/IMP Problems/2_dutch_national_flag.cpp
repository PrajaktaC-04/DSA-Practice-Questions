#include <bits/stdc++.h>
using namespace std;

//DNF is used for sorting array of 0s, 1s and 2s.

class DNF
{
    public:
    void swap(int &i, int &j)
    {
        int temp = i;
        i = j;
        j = temp;
    }

    void sort012(int a[], int n)
    {
        int low = 0, mid = 0, high = n-1;
        while(mid <= high)
        {
            if(a[mid] == 0)
            {
                swap(a[low], a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 1)
            {
                mid++;
            }
            else 
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n]; //array must contain only 0s, 1s and 2s.
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted array: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    DNF d1;
    d1.sort012(arr, n);

    cout << "Sorted array: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}