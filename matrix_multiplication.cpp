#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m, n; // m=rows n=columns
    int mat1[10][10], mat2[10][10], mat3[10][10];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat4[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mat4[i][j] += mat1[i][k] + mat2[k][i];
            }
        }
    }

    return 0;
}