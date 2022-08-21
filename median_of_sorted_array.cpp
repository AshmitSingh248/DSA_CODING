#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (n % 2 == 0)
    {
        j = (arr[n / 2] + arr[n / 2 + 1]) / 2;
    }
    else
    {
        j = arr[n / 2];
    }
    cout << j;

    // write your code here

    return 0;
}