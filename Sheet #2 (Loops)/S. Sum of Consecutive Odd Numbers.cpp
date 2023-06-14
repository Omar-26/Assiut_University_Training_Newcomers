#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOfTestCases, x, y, sum = 0;
    cin >> numOfTestCases;
    for (int i = 0; i < numOfTestCases; i++)
    {
        sum = 0;
        cin >> x >> y;
        for (int j = min(x, y) + 1; j < max(x, y); j++)
        {
            if (j % 2 == 0)
                continue;
            else
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
