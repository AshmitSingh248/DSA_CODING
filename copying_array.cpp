#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    sort(arr1, arr1 + n);
    for (i = 0; i < n; i++)
    {
        cout << arr1[i];
    }
    return 0;
}