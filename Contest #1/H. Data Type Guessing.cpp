#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    double D = ((n * k) / a);
    long long L = D ;
    double rem = D - L ;
    if (rem > 0)
        cout << "double" << endl;
    else if ( L <= 2147483647)
        cout << "int" << endl;
    else
        cout << "long long" << endl;
}