// Required 100, 20, 10 rs notes for given amount.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    int Rs100, Rs50, Rs20, Rs1;

    cout << "Enter the amount." << endl;
    cin >> amount;

    switch(1)
    {
        case 1:
            Rs100 = amount / 100;
            amount = amount % 100;
            cout << "Required Rs. 100 notes: " << Rs100 << endl;

        case 2:
            Rs50 = amount / 50;
            amount = amount % 50;
            cout << "Required Rs. 50 notes: "<< Rs50 << endl;

        case 3:
            Rs20 = amount / 20;
            amount = amount % 20;
            cout << "Required Rs. 20 notes: "<< Rs20 << endl;

        case 4:
            Rs1 = amount;
            cout << "Required Rs. 1 notes: "<< Rs1 << endl;
    }

    return 0;
}