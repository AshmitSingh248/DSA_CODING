#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid, i, j, k; // left is first element, right is the last element, mid is the middle element.
    int leftarr[n1], rightarr[n2];                      // left stores the left half, right stores the right half.
    for (i = 0; i < n1; i++)
    {
        leftarr[i] = arr[left + i]; // stores the left half.
    }
    for (i = 0; i < n2; i++)
    {
        rightarr[i] = arr[mid + i + 1]; // stores the right half.
    }
    i = 0, j = 0, k = left;
    while (i < n1 && j < n2) // this loop compares between two left and right halves and then stores it in the array.
    {
        if (leftarr[i] <= rightarr[j])
            arr[k++] = leftarr[i++];
        else
            arr[k++] = rightarr[j++];
    }
    while (i < n1)
        arr[k++] = leftarr[i++];
    while (j < n2)
        arr[k++] = rightarr[j++];
}
void mergesort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, mid, right);
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
        int arrsize = sizeof(arr) / sizeof(arr[0]);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        mergesort(arr, 0, n - 1);
        for (i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    return 0;
}