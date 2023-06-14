#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Password;
    while (cin >> Password)
    {
        if (Password == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
            cout << "Wrong" << endl;
    }
    return 0;
}