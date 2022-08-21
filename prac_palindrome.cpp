#include <bits/stdc++.h>
using namespace std;
string checkpalindrome(string str)
{
    int n = str.length();
    string str1 = str;
    reverse(str1.begin(), str1.end());
    if (str1 == str)
    {
        return "yes";
    }
    else
        return "no";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        string str;
        cin >> str;
        cout << checkpalindrome(str);
    }
    return 0;
}