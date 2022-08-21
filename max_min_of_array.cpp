#include <bits/stdc++.h>
using namespace std;
int getmax(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[0])
        {
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cout << "Enter the size of array";
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        n = sizeof(arr) / sizeof(arr[0]);

        cout << getmin(arr, n) << " ";
        cout << getmax(arr, n) << " ";
        cout << endl;
    }
}