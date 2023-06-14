#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, primeFlag = 1;
    cin >> num;
    for (int i = num; i > 2; i--)
    {
        if (num % (i - 1) == 0)
        {
            primeFlag = 0;
            break;
        }
    }
    if (primeFlag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}