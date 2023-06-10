#include <bits/stdc++.h>
using namespace std;
int main()
{
    short a, b;
    cin >> a >> b;
    if ((a == b && a != 0 && b != 0) || (abs(a - b) == 1))
        cout << "YES";
    else
        cout << "NO";
}
/*
we will have non empty interval in the following cases:
even == odd (even != 0 and odd != 0)
1 2 3 4 5 6    ====> started with odd and ended with even
2 3 4 5 6 7    ====> started with even and ended with odd

even > odd by 1 or odd > even by 1
1 2 3 4 5 6 7  ====> started with odd and ended with odd
2 3 4 5 6 7 8  ====> started with even and ended with even
*/