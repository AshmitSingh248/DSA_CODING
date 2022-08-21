#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int start, int end, int key)
{
    if (end < start)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid > key])
        return binarysearch(arr, start, mid - 1, key);
    return binarysearch(arr, mid + 1, end, key);
}
int findpivot(int arr[], int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (mid < end && arr[mid] > arr[mid + 1]) // mid<end is done to check if mid is not the last element.//
        return mid + 1;
    if (mid > start && arr[mid] < arr[mid - 1])
        return mid;
    if (arr[mid] < arr[start])
        return findpivot(arr, start, mid - 1);
    return findpivot(arr, mid + 1, end);
}
int findkey(int arr[], int n, int key)
{
    int pivot = findpivot(arr, 0, n - 1);
    if (pivot == -1)
        return binarysearch(arr, 0, n - 1, key);
    if (pivot == key)
        return key;
    if (arr[0] < key)
        return binarysearch(arr, 0, pivot - 1, key);
    return binarysearch(arr, pivot + 1, n - 1, key);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, key;
        cin >> n;
        cin >> key;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = findkey(arr, n, key);
        cout << index;
    }
    // write your code here

    return 0;
}