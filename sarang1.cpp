#include <bits/stdc++.h>
using namespace std;
int largest(int n)
{
    int l;
    for (int i = 0; i <= 4; i++)
    {
        int x = n % 10;
        l = max(x, l);
        n = n / 10;
    }
    return l;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, res = 0, l = 0;
        cin >> n;
        l = largest(n);
        res = l + 1;
        int m = n % 10;
        int num = n + (res - m);
        cout << num << endl;
    }
    return 0;
}