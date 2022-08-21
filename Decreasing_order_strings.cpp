#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string str;
        cin >> str;
        int arr[26];
        int n = str.length();
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++) //remember this stage,as when 2 characters are sorted they are not taken in the iteration.
            {
                if (str[j + 1] > str[j])
                {
                    char temp = str[j + 1];
                    str[j + 1] = str[j];
                    str[j] = temp;
                }
            }
        }
        cout << str<<endl;
    }
    return 0;
}