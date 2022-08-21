#include <bits/stdc++.h>
using namespace std;
int countmin(string expr)
{
    int length = expr.length();
    if (length % 2)
        return -1;
    stack<char> s;
    for (int i = 0; i < length; i++)
    {
        if (expr[i] == '}' && !s.empty())
        {
            if (s.top() == '{')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }
    int red_length = s.size();
    int k = 0;
    while (!s.empty() && s.top() == '{')
    {
        s.pop();
        k++;
    }
    return (red_length / 2 + k % 2);
}
int main()
{

    int i;
    int n = 100000;
    int c = 1;
    for (i = 0; i < n; i++)
    {
        string expr;
        cin >> expr;
        if (expr[0] == '-')
        {
            break;
        }
        else
        {
            cout << c << "." << countmin(expr) << endl;
            c++;
        }
    }

    return 0;
}