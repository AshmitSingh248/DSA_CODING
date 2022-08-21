#include <bits/stdc++.h>
using namespace std;
bool checksorted(int arr[], int n)
{
    int i;
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    sort(arr1, arr1 + n);
    for (i = 0; i < n; i++)
    {
        if (arr1[i] != arr[i])
        {
            return false;
        }
        return true;
    }
}
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
        if (checksorted(arr, n))

            cout << "yes";
        else
            cout << "No";
    }
    return 0;
}