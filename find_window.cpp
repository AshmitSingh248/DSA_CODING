#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, start, end;
        int max = INT_MIN, min = INT_MAX;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (start = 0; start < n; start++)
        {
            if (arr[start] > arr[start + 1])
            {

                break;
            }
        }
        for (end = n; end > 0; end--)
        {
            if (arr[end] < arr[end - 1])
            {

                break;
            }
        }
        for (i = start; i <= end; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        for (i = 0; i < start; i++)
        {
            if (arr[i] > min)
                start = i;
        }
        for (i = end; i < n; i++)
        {
            if (arr[i] < max)
                end = i;
        }
        cout << start << " " << end << endl;
    }
    return 0;
}