#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double R;
    const double Pi = 3.141592653;
    cin >> R;
    double A = Pi * R * R;
    cout << fixed << setprecision(9) << A;
}