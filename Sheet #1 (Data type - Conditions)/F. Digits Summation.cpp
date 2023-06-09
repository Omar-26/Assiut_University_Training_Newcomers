#include <iostream>
using namespace std;
int main()
{
    long long N, M;
    cin >> N >> M;
    cout << (N % 10) + (M % 10);
}
/*
- To get the Last Digit of a number we use the "Modulus Operator"
- Modulus of an integer with 10 gives last digit
- with 100 gives the last 2 digits and so on...
*/