#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        int count = 0;
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0];

        for (i = 0; i <= n; i++)
        {
            if (arr[i] > max)
            {
                count++;
                max = arr[i];
            }
        }
        cout << count;
    }
    // write your code here

    return 0;
}
