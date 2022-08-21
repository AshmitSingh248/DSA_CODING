#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        string str;
        cin >> str;
        int n = str.length();
        int flag;
        for (i = 0; i < n; i++)
        {
            flag = 0;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'n')
            {
                flag = 0;
                continue;
            }
            if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u' || str[i] == 'n')
            {
                if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        if (flag == 1)
            cout << "NO" << endl;
    }
    return 0;
}