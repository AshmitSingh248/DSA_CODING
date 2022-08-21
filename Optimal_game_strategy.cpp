#include <bits/stdc++.h>
using namespace std;
void check(stack<int> s1, stack<int> s2)
{
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() > s2.top())
        {
            cout << "2"
                 << " ";
            s2.pop();
        }
        else if (s1.top() < s2.top())
        {
            cout << "1"
                 << " ";
            s1.pop();
        }
        else if (s1.top() == s2.top())
        {
            cout << "2"
                 << " ";
            s1.pop();
            s2.pop();
        }
    }
}
int main()
{
    stack<int> s1, s2;
    int i, n;
    int ele, elem;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> ele;
        arr[i] = ele;
        s1.push(ele);
    }
    for (i = n - 1; i >= 0; i--)
    {
        elem = arr[i];
        s2.push(elem);
    }
    check(s1, s2);
    return 0;
}