#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void rotatebyone(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void rotate(int arr[], int n, int d)
{
    int i;
    for (i = 0; i <= d; i++)
    {
        rotatebyone(arr, n);
    }
}
int main()
{
    int i, n, d;
    int arr[10];
    cin >> n >> d;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, d);
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
