#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, primeFlag = 1, primeNumber;
    cin >> num;
    // To iterate over all numbers before The given number "N"
    for (int i = 2; i <= num; i++)
    {
        // To check if there is prime numbers before N
        for (int j = i; j > 2; j--)
        {
            if (i % (j - 1) == 0)
            {
                primeFlag = 0;
                break;
            }
        }
        if (primeFlag == 1)
            cout << i << " ";
        primeFlag = 1;
    }
    return 0;
}