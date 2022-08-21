#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, n;
        cin >> n;
        int arr[n];

        int number = 0;
        int major = -1;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            if (number == 0)
            {
                major = arr[i];
                number = 1;
            }
            else
            {
                if (arr[i] == major)

                    number++;

                else

                    number--;
            }
        }
        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == major)
            {
                count++;
            }
        }
        if (count > (n / 2))

            cout << major;
        else
            cout << "-1";

        // write your code here
    }
    return 0;
}
