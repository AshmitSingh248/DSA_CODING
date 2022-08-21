#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, j, count = 0;

        cin >> n;
        char str[n];

        for (i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'x')
            {
                count++;
            }

            // write your code here
        }
        cout << count;
    }
}