#include <bits/stdc++.h>
using namespace std;
#define int_max 2143765;
int findmissing(int arr[], int low, int high, int diff)
{
    int n;

    if (high < low)
        return 0;
    int mid = low + (high - low) / 2;

    if (mid > 0 && arr[mid] - arr[mid - 1] != diff) // for checking the numbers just beside the mid element.
        return arr[mid - 1] + diff;
    if (arr[mid + 1] - arr[mid] != diff)
        return arr[mid] + diff;
    if (arr[mid] == arr[0] + (mid * diff)) // this checks if the left part of the mid is sorted.
        return findmissing(arr, mid + 1, high, diff);
    return findmissing(arr, low, mid - 1, diff);
}
int missing(int arr[], int n)
{
    int diff = (arr[n - 1] - arr[0]) / n;
    return findmissing(arr, 0, n - 1, diff);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, diff;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << missing(arr, n) << endl;
    }

    // write your code here

    return 0;
}
