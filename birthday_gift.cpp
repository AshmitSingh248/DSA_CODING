#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
   { int a, b, c;
    cin>>a>>b>>c;
        int ans = 0;
        if(a==b){
          cout<<"YES"<<endl;
        }
        while (b >= a)
        {
            a = a + c;
            if (a == b)
            {
                ans = 1;
                break;
            }
            else if (a > b)
                break;
        }
        if (ans == 1)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}