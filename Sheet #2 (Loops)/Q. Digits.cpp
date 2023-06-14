#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long number;
    int numOfTestCases;
    cin >> numOfTestCases;
    for (int i = 1; i <= numOfTestCases; i++)
    {
        cin >> number;
        if (number == 0)
            cout << 0;
        else
        {
            while (number != 0)
            {
                long long digit = number % 10;
                cout << digit << " ";
                long long remainder = (number - digit) / 10;
                number = remainder;
            }
        }
        cout << endl;
    }
    return 0;
}
/*
Another Solution Using String
=> Note that it's easier to deal with strings than numbers
    for (int i = 1; i <= numOfTestCases; i++)
    {
    string number;
    cin >> number;
    for (int j = number.length() - 1; j >= 0; j--)
        cout << number[j] << " ";
    cout << endl;
*/