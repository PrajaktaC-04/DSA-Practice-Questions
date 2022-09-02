// Exiting the infinite loop without using break

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    while(1)
    {
        switch (n)
        {
            case 1:
                cout << "1" <<endl;
                break;

            case 2:
                cout << "2" << endl;
                break;

            case 3:
                cout << "3" << endl;
                break;
            
            default:
                cout << "Default" << endl;
                break;
        }
        exit(0); // use exit() to exit the infinite loop without break statement
    }
    return 0;
}