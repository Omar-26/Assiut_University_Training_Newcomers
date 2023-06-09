#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << ((a % b == 0 || b % a == 0) ? "Multiples" : "No Multiples");
}
/*
You Can of Course use if..else Statement but Ternary is a shortened version of it
Syntax : (Condition) ? condition true : condition false ;
*/