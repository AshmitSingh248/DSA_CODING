/*#include <bits/stdc++.h>    WHY Cant this approach be taken!!
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, m, n, j;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        int flag = 0;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == m)
                {
                    flag = 1;
                }
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " " << j << endl;
        }
        if (flag == 0)
        {
            cout << "no answer" << endl;
        }
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, m, n, j;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        int flag = 0;
        i = 0;
        j = n - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] == m)
            {
                cout << i << " " << j << endl;
                flag = 1;
                break;
            }
            else if (arr[i] + arr[j] > m)
                j--;
            else
                i++;
        }

        if (flag == 0)
        {
            cout << "no answer" << endl;
        }
    }

    return 0;
}