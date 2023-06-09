#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char s ;
    cin >> a >> s >> b ;
    switch (s) 
    {
    case '+': cout << a+b ; break ;
    case '-': cout << a-b ; break ;
    case '*': cout << a*b ; break ;
    case '/': cout << a/b ; break ;
    }
}
//Switch Case is more easy to use than if statement in this situation