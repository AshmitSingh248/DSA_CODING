#include <bits/stdc++.h>
using namespace std;
int gcd(int m, int n)
{
    if (m == n)
        return m;                      /*gcd function is called until both the number become equal. Difference of the number is used.*/
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (m > n)
        return gcd(m - n, n);
    else
        return gcd(m, n - m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        cout << gcd(m, n);
    }
    // write your code here

    return 0;
}