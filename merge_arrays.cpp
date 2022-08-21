#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, k;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[10];
    for (i = 0; i < 5; i++)
    {
        arr3[k] = arr1[i++];
    }
    for (k = 0; k < 5; k++)
    {
        cout << arr3[k];
    }
    return 0;
}