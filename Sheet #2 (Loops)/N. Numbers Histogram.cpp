#include <bits/stdc++.h>
using namespace std;
int main()
{
    char symbol;
    int row, col;
    cin >> symbol >> row;
    for (int i = 0; i < row; i++)
    {
        cin >> col;
        for (int j = 0; j < col; j++)
            cout << symbol;
        cout << endl;
    }
    return 0;
}