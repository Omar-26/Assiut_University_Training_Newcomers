#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x >= 10)
    {
        x /= 10;
    }
    cout << ((x % 2 == 0) ? "EVEN" : "ODD");
}
/*
- To get the first digit, we keep on dividing by 10 till we get
a number less than 10
- To get the last number we take the modulus of the given number with 10
*/
