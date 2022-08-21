#include <bits/stdc++.h>
using namespace std;
void powerset(string str, string s = "", int index = -1) // str=input string, s= current subset, index= index in s subset
{
    int n = str.length();
    if (index == n)
        return;
    cout << s << endl;
    for (int i = index + 1; i < n; i++)
    {
        s += str[i];
        powerset(str, s, i);

        s.erase(s.size() - 1);  //erases the last element.
    }
    return;
}
int main()
{
    int i, j, n;

    string str;

    cin >> str;
    n = str.length();
    sort(str.begin(), str.end());
    powerset(str);

    return 0;
}