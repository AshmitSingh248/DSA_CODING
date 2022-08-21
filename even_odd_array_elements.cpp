#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, j = 0, k = 0;
        cin >> n;
        int arr[n], even[10], odd[10];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }

        return 0;
    }
}
#include <bits/stdc++.h>
  using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}