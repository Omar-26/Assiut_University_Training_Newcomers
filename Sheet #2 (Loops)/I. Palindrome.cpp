#include <bits/stdc++.h>
using namespace std;
int main()
{
    string strNum, reverseString = "";
    int pos, palindromeFlag = 1;
    cin >> strNum;
    int len = strNum.length();
    // To Check That The number is mirrored
    for (int i = 0; i < (len / 2); i++)
    {
        if (strNum[i] != strNum[len - 1 - i])
        {
            palindromeFlag = 0;
            break;
        }
    }
    if (palindromeFlag == 1)
    {
        cout << strNum << endl;
        cout << "YES";
    }
    else
    {
        // To Reverse the String
        for (int j = (len - 1); j >= 0; j--)
        {
            reverseString += strNum[j];
        }
        // To Remove Zeros from The Beginning of the string
        for (int k = 0; k < len; k++)
            if (reverseString[k] != '0')
            {
                pos = k;
                break;
            }
        cout << reverseString.substr(pos, len) << endl;
        cout << "NO";
    }
    return 0;
}