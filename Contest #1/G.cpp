#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long e, m, b, n = 0, mn;
    cin >> e >> m >> b;
    mn = min({e, m, b});
    n += mn;
    e -= mn;
    m -= mn;
    b -= mn;
    mn = min(e / 2, b);
    n += mn;
    cout << n << endl;
}