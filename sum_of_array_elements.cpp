#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int i, n, a, sum = 0;

        cin >> n;
        int arr[10];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (a = 0; a <= i; a++)
        {
            sum = sum + a;
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}