#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, k;
        int sum = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (i = n - 1; i >= 0; i = i - 2)
        {
            int j = arr[i];
            sum = sum + j;
        }

        cout << sum;
    }
    // write your code here

    return 0;
}