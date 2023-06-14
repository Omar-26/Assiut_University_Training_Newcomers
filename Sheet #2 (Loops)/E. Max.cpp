#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOFNumbers, number, maxNumber = 0;
    cin >> numOFNumbers;
    for (int i = 0; i < numOFNumbers; i++)
    {
        cin >> number;
        if (number > maxNumber)
            maxNumber = number;
    }
    cout << maxNumber;
    return 0;
}