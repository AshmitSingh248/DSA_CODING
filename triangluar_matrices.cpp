#include <bits/stdc++.h>
using namespace std;
void upper(int arr[3][3], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout << endl;
    }
   
}
void lower(int arr[3][3], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout << endl;
    }
    
}
int main()
{
    int i, j, m, n, arr[3][3];
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    lower(arr, m, n);
    upper(arr, m, n);

    // write your code here

    return 0;
}