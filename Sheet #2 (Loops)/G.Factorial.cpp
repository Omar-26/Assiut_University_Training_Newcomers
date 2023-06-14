#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOfTestCases, number;
    long long factorial = 1;
    cin >> numOfTestCases;
    for (int i = 0; i < numOfTestCases; i++)
    {
        cin >> number;
        for (; number > 0; number--)
            factorial *= number;
        cout << factorial << endl;
        factorial = 1;
        // Reseting Factorial to 1 to make sure it doesn't affect the next Calculations
    }
    return 0;
}
/*
Note that we can't use int because the calculated Factorials
in Test Cases Are out of int range.
*/