#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n;
    int count = 0, i = 1;
    cin >> n >> k;
    k = 240 - k;
    while (count <= k && i <= n)
    {
        int m = i * 5;
        if (count + m <= k)
        {
            count = count + m;
            i++;
        }
        else
        {
            break;
        }
        }
    cout << i - 1 << endl;

    return 0;
}