#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, x;
        int a = 0;
        cin >> n;
        cin >> x;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] == x || (arr[i] < x && arr[i + 1] > x))
            {
                cout << i;
                a++;
            }
            else
            {
                continue;
            }
        }
        if(a==0)
        {
            cout<<"-1";
        }
    }
    // write your code here

    return 0;
}