#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int i;
    int res = arr[0];
    for (i = 0; i < n; i++)
    {
        if (res > arr[i])
        {
            res = arr[i];
        }
    }
     for (i = 0; i < n; i++)
    {
        if (res == arr[i])
        {
            res=i;
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, a;
        cin >> a;
        int arr[a];
        for (i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        // for (a = 0; a < i; a++)
        //{
        //     cout << arr[a] << " ";
        // }

        int n = sizeof(arr) / sizeof(arr[0]);
        getMin(arr, n);
        cout << "Min number is" << getMin(arr, n) << endl;
    }

    return 0;
}