#include <bits/stdc++.h>
using namespace std;
int main()
{
  int numOfValues, even, odd, positive, negative;
  even = odd = positive = negative = 0;
  cin >> numOfValues;
  for (int i = 0; i < numOfValues; i++)
  {
    int number;
    cin >> number;
    if (number % 2 == 0)
      even++;
    else
      odd++;
    if (number > 0)
      positive++;
    else if (number < 0)
      negative++;
  }
  cout << "Even: " << even << endl
       << "Odd: " << odd << endl
       << "Positive: " << positive << endl
       << "Negative: " << negative << endl;
}