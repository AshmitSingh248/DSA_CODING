#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    int f;
    if (n <= 1)
        return n;
    f = fibo(n - 1) + fibo(n - 2);
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
        cout << fibo(n);
        cout<<endl;
    }

    // write your code here

    return 0;
}