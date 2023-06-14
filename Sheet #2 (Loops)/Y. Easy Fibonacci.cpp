#include <bits/stdc++.h>
using namespace std;
#define cinn \
    int n;   \
    cin >> n;
int main()
{
    int fibb[45] = {0};
    cinn for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << fibb[i] << " ";
        else if (i == 2)
        {
            fibb[i] = 1;
            cout << fibb[i] << " ";
        }
        else
        {
            fibb[i] = fibb[i - 1] + fibb[i - 2];
            cout << fibb[i] << " ";
        }
    }
    return 0;
}
//        1 2 3 4 5 6 7 8  9
//        0 1 1 2 3 5 8 13 21