#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        // Here We have to find relations between i and j to make the code Dynamic
        for (int j = (i + (i - 1) * 3); j <= (i * 4); j++)
        {
            if (j % 4 != 0)
            {
                cout << j << " ";
            }
            else
            {
                cout << "PUM" << endl;
            }
        }
    }
    return 0;
}