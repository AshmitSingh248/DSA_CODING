#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, m, n, j;
        cin >> m;
        int arr1[m];
        for (i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        cin >> n;
        int arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        i = 0;
        j = 0;
        while (i < m && j < n)
        {
            if (arr1[i] == arr2[j])
                j++;
            i++;
        }
        if (j == n)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}