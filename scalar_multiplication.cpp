#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m, n, k, arr[10][10];
    cin >> m >> n >> k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << k * arr[i][j] << " ";
        }
        cout<<endl;
    }

    // write your code here

    return 0;
}