#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long e, m, b, n = 0, minimum;
    cin >> e >> m >> b;
    minimum = min({e, m, b});
    n += minimum;
    e -= minimum;
    m -= minimum;
    b -= minimum;
    minimum = min(e / 2, b);
    n += minimum;
    cout << n << endl;
}