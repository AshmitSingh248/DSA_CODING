#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, a = 0;

        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cout << "hard";
                a++;
            }

            else
            {
                continue;
            }
        }
        if (a == 0)
            cout << "Easy";
    }
    return 0;
    // write your code here
}
