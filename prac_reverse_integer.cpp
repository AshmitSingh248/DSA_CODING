#include <bits/stdc++.h>
using namespace std;
int revint(int data)
{
    int rev = 0;
    while (data != 0)
    {
        int rem = data % 10;
        data /= 10;

        if (rev > INT32_MAX / 10 || rev == INT32_MAX / 10 && rem > 7)
            return 0;
        if (rev < INT32_MIN / 10 || rev == INT32_MIN / 10 && rem < -8)
            return 0;
        rev = rev * 10 + rem;
    }
    return rev;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int data;
        cin >> data;
        cout << revint(data);
    }

    return 0;
}