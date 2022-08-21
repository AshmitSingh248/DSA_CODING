#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;

    return (n % 10 + sum(n / 10));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        sum(i);
        cout << sum(i);
    }

    // write your code here

    return 0;
}