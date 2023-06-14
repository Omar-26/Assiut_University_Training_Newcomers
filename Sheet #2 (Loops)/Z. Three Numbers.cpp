#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s, permutations = 0;
    cin >> k >> s;
    for (int x = 0; x <= k; x++)
        for (int y = 0; y <= k; y++)
            if (s - x - y >= 0 && s - x - y <= k)
                permutations++;
    cout << permutations << endl;
    return 0;
}

/*
We can use a third for loop for z but it will exceed the time limit

    for (int x = 0; x <= k; x++)
        for (int y = 0; y <= k; y++)
            for (int z = 0; z <= k; z++)
                if (x + y + z == s)
                    permutations++;

===> Note That : We know that s = x + y + z so "z = s - x - y"
this condition is to check that z is in range 0 ==> k
if (s - x - y >= 0 && s - x - y <= k)
                permutations++;
*/