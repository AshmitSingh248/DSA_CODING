#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,c;
        cin>>m>>n;
        c=n%1;
        if (m==2 && c==0)
        {
            n=n/1;
            cout<<n;
        }
        else{
            cout<<"m";
        }
    }
    //write your code here
    
    return 0;
}