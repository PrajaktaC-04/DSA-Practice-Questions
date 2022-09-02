// A program to display the entered character is capital letter, small letter or number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    // The ASCII value of capital letters is from 65 to 90.
    // The ASCII value of small letters is from 97 to 122.
    // The ASCII value of numbers 0 to 9 is from 48 to 57.

    int ascii_value = int(ch);
    
    if(ascii_value >= 65 && ascii_value <= 90)
    {
        cout << ch << " is a capital letter." << endl;
    }
    else if(ascii_value >= 97 && ascii_value <= 122)
    {
        cout << ch << " is a small letter." << endl;
    }
    else if(ascii_value >= 48 && ascii_value <= 57)
    {
        cout << ch << " is a number between 0 to 9." << endl;
    }
    return 0;
}