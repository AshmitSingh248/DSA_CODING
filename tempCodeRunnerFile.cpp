#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, flag;
    cin >> t;
    while (t--)
    {
        int i;
        string str = " ";
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[j] == ch)
                    flag = 1;
                break;
            }
        }
        if (flag != 1)
            cout << i;
    }
    return 0;
}
