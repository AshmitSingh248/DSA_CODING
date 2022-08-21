#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string str;
        cin >> str;
        int n = str.length();
        bool x = false;
        sort(str.begin(),str.end());
        for (i = 0; i < n; i++)
        {
            int count = 1;

            for (j = i + 1; j < n; j++)
            {

                if (str[j] == str[i])
                    count++;
            }
            if (count > 1)
            {
                cout << str[i] << "=" << count << " ";
                x = true;
            }
        }
        if (x == false)
        {
            cout << "-1" << endl;
        }
        cout << endl;
    }
    return 0;
}