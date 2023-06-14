#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOfTestCases, remainder, noZeroDecimal = 0, n = 0;
    long long num;
    cin >> numOfTestCases;
    for (int i = 0; i < numOfTestCases; i++)
    {
        noZeroDecimal = n = 0;
        cin >> num;
        while (num != 0)
        {
            remainder = num % 2;
            num /= 2;
            if (remainder == 0)
                continue;
            noZeroDecimal += (remainder * pow(2, n));
            n++;
        }
        cout << noZeroDecimal << endl;
    }
    return 0;
}
