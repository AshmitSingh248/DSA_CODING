#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, m = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= m)
            {
                cout << arr[i];
                m = arr[i];
            }
        }
    }
    // write your code here

    return 0;
}