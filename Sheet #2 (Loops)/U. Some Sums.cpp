#include <bits/stdc++.h>
using namespace std;
bool isInRange(int, int, int);
int main()
{
    int N, a, b, sum = 0;
    cin >> N >> a >> b;
    for (int i = 1; i <= N; i++)
    {
        if (isInRange(i, a, b) == true)
            sum += i;
    }
    cout << sum;
}
// We created a user defined function to make sure that the sum of digits is in the given range
bool isInRange(int i, int a, int b)
{
    bool inRange = false;
    int sum = 0;
    while (i != 0)
    {
        int lastDigit = i % 10;
        sum += lastDigit;
        if (sum >= a && sum <= b)
            inRange = true;
        else
        {
            inRange = false;
        }
        int remainingNum = (i - lastDigit) / 10;
        if (remainingNum == 0)
            break;
        i = remainingNum;
    }
    return inRange;
}