// A program to draw a square pattern.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A program to draw square pattern using numbers(no. of row).
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << i + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // reverse
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << n - i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A program to draw square pattern using numbers(no. of col).
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // reverse
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << n - j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A program to draw square pattern using numbers(no. of pos).
    // int count = 1;
    
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A A A
    // B B B 
    // C C C 

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << char('A' + i) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A B C 
    // A B C 
    // A B C 

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << char('A' + j) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A B C 
    // D E F 
    // G H I

    // char val = 'A';
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << val << " ";
    //         val++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A B C D 
    // B C D E 
    // C D E F 
    // D E F G

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout << char('A' + i + j) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    while(i < n)
    {
        int j = 0;
        while( j < (n - i))
        {
            cout << j + 1;
            j++;
        }

        int j1 = 0;
        while(j1 < i)
        {
            cout << "*";
            j1++;
        }

        int j2 = 0;
        while(j2 < i)
        {
            cout << "*";
            j2++;
        }

        int j3 = 0;
        while(j3 < (n - i))
        {
            cout << n - j3 - i;
            j3++;
        }

        cout << endl;
        i++;
    }
    return 0;
}