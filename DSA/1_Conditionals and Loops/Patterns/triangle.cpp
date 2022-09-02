// A program to draw a upward triangle.

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
    //     while(j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //row no.
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << i + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //position
    // int count = 1;
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7 
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << i + j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A
    // B B 
    // C C C 

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << char('A' + i) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A
    // B C 
    // D E F 
    
    // char val = 'A';
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << val << " ";
    //         val++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A 
    // B C 
    // C D E 
    // D E F G 

    // while(i < n)
    // {
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << char('A' + i + j) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // D 
    // C D 
    // B C D 
    // A B C D 

    // while(i < n)
    // {
    //     char val = 'A' + n - i - 1;
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << val << " ";
    //         val++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //       *
    //     * *
    //   * * *
    // * * * *

    // while(i < n)
    // {
    //     int space = n - i - 1;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // * * * *
    // * * *
    // * *
    // * 

    // while(i < n)
    // {
    //     int j = 0; 
    //     while(j <= (n-i))
    //     {
    //          cout << "* ";
    //          j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // * * * *
    //   * * *
    //     * *
    //       *

    // while(i < n)
    // {
    //     int space = i;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= (n-i))
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    // while(i < n)
    // {
    //     int space = i;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= (n-i))
    //     {
    //         cout << i + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //       1
    //     2 2 
    //   3 3 3 
    // 4 4 4 4

    // while(i < n)
    // {
    //     int space = n - i - 1;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << i + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1 2 3 4
    //   2 3 4
    //     3 4
    //       4

    // while(i < n)
    // {
    //     int space = i;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     int start = i + 1;
    //     while(j < (n - i))
    //     {
    //         cout << start;
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //       1
    //     2 3 
    //   4 5 6
    // 7 8 9 10

    // int count = 1;
    // while(i < n)
    // {
    //     int space = n - i - 1;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << count;
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 5 4 3 2 1
    //   4 3 2 1
    //     3 2 1 
    //       2 1
    //         1

    while(i < n)
    {
        int space = i;
        while(space)
        {
            cout << " ";
            space--;
        }

        int j = 0;
        while(j < (n - i))
        {
            cout << n - j - i;
            j++;
        }
        cout << endl;
        i++;
    }

    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1 

    // while(i < n)
    // {
    //     int space = n - i - 1;
    //     while(space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 0;
    //     while(j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     int start = i;
    //     while(start)
    //     {
    //         cout << start;
    //         start--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    return 0;
}