#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, j, temp;
    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i]; // this block swaps the elements.
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
void quicksort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int pivot = partition(arr, low, high);
    quicksort(arr, low, pivot - 1);
    quicksort(arr, pivot + 1, high);
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
        quicksort(arr, 0, n - 1);
        for (i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    return 0;
}