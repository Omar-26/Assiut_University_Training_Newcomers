#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    cout << ((a >= 97 && a < 122) ? char(a + 1) : 'a');
}