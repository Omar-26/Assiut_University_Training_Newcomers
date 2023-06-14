#include <bits/stdc++.h>
using namespace std;
bool isLucky(int i);
int main()
{
    int a, b;
    bool foundLucky = false;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            foundLucky = true;
        }
    }
    if (!foundLucky)
        cout << -1;
    return 0;
}
// We created a user defined function to make sure if there is a lucky number in the range
bool isLucky(int i)
{
    bool lucky = false;
    while (i != 0)
    {
        int lastDigit = i % 10;
        if (lastDigit == 4 || lastDigit == 7)
            lucky = true;
        else
        {
            lucky = false;
            break;
        }
        int remainingNum = (i - lastDigit) / 10;
        if (remainingNum == 0)
        {
            break;
        }
        i = remainingNum;
    }
    return lucky;
}