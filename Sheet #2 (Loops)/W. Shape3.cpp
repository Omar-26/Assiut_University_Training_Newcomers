#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j < row; j++)
            cout << " ";
        for (int k = 1; k < 2 * i; k++)
            cout << "*";
        cout << endl;
    }
    // To mirror the shape
    for (int i = row; i >= 1; i--)
    {
        for (int j = i; j < row; j++)
            cout << " ";
        for (int k = 1; k < 2 * i; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
// This Problem is the same as (T. Shape 2) but with the same shape mirrored
// If you don't understand go back to solution of Problem 2