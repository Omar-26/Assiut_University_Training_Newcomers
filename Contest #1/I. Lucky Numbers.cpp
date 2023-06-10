#include <bits/stdc++.h>
using namespace std;
int main()
{
  short N;
  cin >> N;
  short N1st = N / 10, N2nd = N % 10;
  // string N;
  // int N1st = N[0] - '0', N2nd = N[1] - '0';
  //==> We can also use string and convert to int using this Technique
  if (N2nd == 0)
  {
    cout << "YES";
    return 0;
  }
  // You can also use the ternary operator here
  // cout <<((N1st % N2nd == 0 || N2nd % N1st == 0) ? "YES" : "NO");
  if (N1st % N2nd == 0 || N2nd % N1st == 0)
    cout
        << "YES";
  else
    cout << "NO";
  return 0;
}