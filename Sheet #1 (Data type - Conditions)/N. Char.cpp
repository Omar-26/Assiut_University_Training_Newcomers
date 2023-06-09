#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= 65 && x <= 90)
        cout << char(x + 32);
    else if (x >= 97 && x <= 122)
        cout << char(x - 32);
    /*
    To Convert from Capital Letter to Lower Letter
    We either subtract 32 or add 32
    */
}
/*
Another Solution Using Built in Functions :
    char x;
    cin >> x;
    if (isupper(x))
    {
        x = (char)tolower(x);
        cout << x;
    }
    else if (islower(x))
    {
        x = (char)toupper(x);
        cout << x;
    }
*/