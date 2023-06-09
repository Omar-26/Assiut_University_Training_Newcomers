#include <iostream>
using namespace std;
int main()
{
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    cout << (( s1 == s2 ) ? "ARE Brothers" : "NOT");
}
/*
You Can of Course use if..else Statement but Ternary is a shortened version of it
Syntax : (Condition) ? condition true : condition false ;
*/