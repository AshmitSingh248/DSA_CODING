#include <bits/stdc++.h> // important question
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[100];
        int i, j = 0, k = 0, n;
        cin >> n;                      /*taking input in the array and storing the value in a variable and simultaneously
                                               storing the index*/
        for (i = 1; i < n; i++)
        {
            cin >> arr[i];
            j += arr[i];
            k += i;
        }
        k += n;
        cout << k - j << endl;
    }
    // write your code here

    return 0;
}