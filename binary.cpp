#include <bits/stdc++.h>
using namespace std;
void binary(int a[], int k, int n)
{
    int i;
    if (k == n) /*watch the video on prepbytes for understanding*/
    {
        for (i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        return;
    }
    if (a[k - 1] == 0)
    {
        a[k] = 1;
        binary(a, k + 1, n);
        a[k] = 0;
        binary(a, k + 1, n);
    }
    else
    {
        a[k] = 0;
        binary(a, k + 1, n);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        a[0] = 0;
        binary(a, 1, n);
        a[0] = 1;
        binary(a, 1, n);
    }

    // write your code here

    return 0;
}