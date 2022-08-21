#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m, n, k, mit1[10][10], mit2[10][10], mit3[10][10], mit4[10][10];
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mit1[i][j];
        }
    }
    /*for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mit1[i][j];
        }
        cout << endl;
    }*/
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mit2[i][j];
        }
    }

    /*for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mit2[i][j];
        }
        cout << endl;
    }*/
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mit3[i][j] = 0;
            mit3[i][j]=mit1[i][j]+mit2[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mit4[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mit4[i][j] += mit1[i][k] * mit2[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mit3[i][j]<<" ";
        }
        cout << endl;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mit4[i][j]<<" ";
        }
        cout << endl;
    }

    // write your code here

    return 0;
}