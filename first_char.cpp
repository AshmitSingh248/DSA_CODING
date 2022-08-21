#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, flag;
    cin >> t;
    while (t--)
    {
        int i, flag = 0;
        string str = " ";
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[j] == ch)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                cout << str[i];
                break;
            }
        }

        cout << "-1";
    }
    return 0;
}
