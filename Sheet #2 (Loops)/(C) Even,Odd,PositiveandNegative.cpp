#include <bits/stdc++.h>
using namespace std;
int main()
{
  int numOfValues, even = 0, odd = 0, positive = 0, negative = 0;
  cin >> numOfValues;
  vector<int> Values(numOfValues);
  for (int i = 1; i <= numOfValues; i++)
  {
    cin >> Values[i]; 
    if (Values[i] % 2 == 0)
      even++;
    else
      odd++;
    if (Values[i] > 0)
      positive++;
    else if (Values[i] < 0)
      negative++;
  }
  cout << "Even: " << even << endl
       << "Odd: " << odd << endl
       << "Positive: " << positive << endl
       << "Negative: " << negative << endl;
}