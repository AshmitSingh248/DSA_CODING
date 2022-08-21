#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int res, flag;

        for (int i = 0; i < str.length(); i++)
        {
            flag = 1;
            for (int j = 0; j < str.length(); j++)
            {
                if ((str[i] == str[j]) && (i != j))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << i << endl;
                break;
            }
        }
        
        
    }
    return 0;
}