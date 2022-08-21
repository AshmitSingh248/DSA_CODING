#include <bits/stdc++.h>
using namespace std;
unsigned long long int fact(int n)
{
    unsigned long long int f;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    f = n * fact(n - 1);
    return f;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n);
        cout << endl;
    }

    // write your code here

    return 0;
}