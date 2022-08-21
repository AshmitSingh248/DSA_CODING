#include <bits/stdc++.h>
using namespace std;
int countmin(char arr[], int n)
{
    if (n % 2)
        return -1;
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "}" && !s.empty())
        {
            if (s.top() == "{")
                s.pop();
            else
                s.push(arr[i]);
        }
        else
            s.push(arr[i]);
    }
    int red_length = s.size();
    int k = 0;
    while (!s.empty() && s.top == "{")
    {
        s.pop();
        k++;
    }
    return (red_length / 2 + n % 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        char arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << countmin(arr, n);
    }
    return 0;
}