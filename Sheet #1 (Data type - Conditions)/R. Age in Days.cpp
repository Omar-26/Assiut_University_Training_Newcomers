#include <iostream>
using namespace std;
int main()
{
    int a, y, m, d;
    cin >> a;
    y = (a) / 365;
    m = (a - (y * 365)) / (30);
    d = a - ((y * 365) + (m * 30));
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
}