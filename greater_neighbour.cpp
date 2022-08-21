#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, j, a, arr[100];
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (j = 0; j < n; j++)
        {
            cout << arr[j];
        }
        cout << endl;
        for (i = 0; i < n; i++)
        {
            if (arr[0] > arr[1])
            {

                a = 1;
            }
        }
        cout << "0";

        for (i = 0; i < n - 1; i++)
        {

            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << i;
                a = 1;
            }
        }
        if (arr[n - 1] < arr[n - 2])
            continue;

        if (a == 0)
        {
            cout << "-1";
        }
    }
}