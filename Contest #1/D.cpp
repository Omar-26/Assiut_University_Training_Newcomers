#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ( a + b - c == d   || a + b * c == d 
      || a - b + c == d   || a - b * c == d 
      || a * b + c == d   || a * b - c == d )
    cout << "YES";
    else 
    cout << "NO"; 
}

/*//*1
//?better shape for the code but it took more memory in the same time of its peers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long r1 = a + b - c,
    r2 = a + (b * c),
    r3 = a - b + c,
    r4 = a - (b * c),
    r5 = (a * b) + c,
    r6 = (a * b) - c;
    int flag = 0;
    if ( r1== d || r2== d || r3== d || r4== d || r5== d || r6== d)
        flag = 1;
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
*/
/*//*2
//?not the best shape for the code the one running now is in better shape
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d)
        cout << "YES" << endl;
    else if (a + (b * c) == d)
        cout << "YES" << endl;
    else if (a - b + c == d)
        cout << "YES" << endl;
    else if (a - (b * c) == d)
        cout << "YES" << endl;
    else if ((a * b) + c == d)
        cout << "YES" << endl;
    else if ((a * b) - c == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
*/