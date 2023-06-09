#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, min(b, c)) << " " << max(a, max(b, c));
}
/*
Another Solution Without Using Functions :
if (a <= b && a <= c)
        cout << a;
    else if (b <= a && b <= c)
        cout << b;
    else if (c <= a && c <= b)
        cout << c;

    cout << " ";

    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else if (c >= a && c >= b)
        cout << c;
*/