#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int j, k;
        int count = 0;
        for (k = n - 1; k >= 0; k--)
        {

            int i = 0, j = k - 1;
            while (i < j)
            {
                if (arr[k] == arr[i] + arr[j])
                {
                    cout << arr[k] << " " << arr[i] << " " << arr[j];
                    count++;
                    break;
                }
                else if (arr[k] > arr[i] + arr[j])
                {
                    i++;
                }
                else if (arr[k] < arr[i] + arr[j])
                {
                    j--;
                }
            }
            if (count != 0)
                break;
        }
        if (count == 0)
            cout << "-1";
    }
    return 0;
}