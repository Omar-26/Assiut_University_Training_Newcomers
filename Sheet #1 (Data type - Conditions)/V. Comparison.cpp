#include <iostream>
using namespace std;
int main()
{
    short a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '>':
        cout << ((a > b) ? "Right" : "Wrong");
        break;
    case '<':
        cout << ((a < b) ? "Right" : "Wrong");
        break;
    case '=':
        cout << ((a == b) ? "Right" : "Wrong");
        break;
    }
}