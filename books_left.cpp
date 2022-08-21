#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k;
    int count = 0;
    cin >> n >> k;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
        if (arr[i] > k)
        {
            break;
        }
    }
    for (i = n; i < 0; i--)
    {
        if (arr[i] <= k)
        {
            count++;
        }
        if (arr[i] > k)
        {
            break;
        }
    }
    int m = n - count;
    cout << m;
    // write your code here

    return 0;
}