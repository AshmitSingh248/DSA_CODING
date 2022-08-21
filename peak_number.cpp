#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] > arr[1])
        {
            cout << 0;
        }
        if (arr[n - 1] > arr[n - 2])
        {
            cout << n - 1;
        }

        for (i = 0; i < n; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << i;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}