#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, sum = 0;
    while (cin >> N >> M)
    {
        if (M <= 0 || N <= 0)
            return 0;
        else
        {
            int sum = 0;
            for (int i = min(M, N); i <= max(M, N); i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
}
