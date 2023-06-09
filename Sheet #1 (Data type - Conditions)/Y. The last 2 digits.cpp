#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    long long p = a * b * c * d;
    int digit = (p) % (100);
    if (digit < 10)
        cout << 0 << digit;
    else
        cout << digit;
}
/*
- To get the Last Digit of a number we use the "Modulus Operator"
- Modulus of an integer with 10 gives last digit
- with 100 gives the last 2 digits and so on...
*/