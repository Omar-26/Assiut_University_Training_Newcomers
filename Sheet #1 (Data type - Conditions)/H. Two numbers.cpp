#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, B;
    cin >> A >> B;
    double div = A / B ;
    cout << "floor " << A << " / " << B << " = " << floor(div) << endl;
    cout << "ceil "  << A << " / " << B << " = " << ceil(div)  << endl;
    cout << "round " << A << " / " << B << " = " << round(div) << endl;
}