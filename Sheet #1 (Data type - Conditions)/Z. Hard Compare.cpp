#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (((b * log(a)) > (d * log(c))) ? "YES" : "NO");
}
/*
The Problem Here is There the memory can't hold big numbers like the test cases
so we Used This Mathematical Property
======> pow(2,3) > pow(2,2)       //    8    >    4
also => 3*log(2)  > 2*log(2)      // 2.07944 > 1.38629
*Try It with Any other Number*
*/