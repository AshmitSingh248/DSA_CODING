#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, res = -1;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                res = i;
            }
        }
        cout << res;
    }
    return 0;
}