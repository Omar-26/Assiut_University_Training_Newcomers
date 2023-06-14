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
        for (int k = 1; k < 2 * i; k++) // I replaced (<= 2i-1) by (< 2i)
            cout << "*";
        cout << endl;
    }
    return 0;
}
/*
At row = 4                          // Note: "No of * = i + (i-1) or (2i-1)"
   *             // 3 Spaces + 1 *  ===> i = 1    // 1 + 0 = 1*
  ***            // 2 Spaces + 3 *  ===> i = 2    // 2 + 1 = 3*
 *****           // 1 Spaces + 5 *  ===> i = 3    // 3 + 2 = 5*
*******          // 0 Spaces + 7 *  ===> i = 4    // 4 + 3 = 7*
*/
