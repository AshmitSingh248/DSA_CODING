#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m,a=0,c=0;
        
        cin>>n;
        m=n%10;
        if (m==0)
        {
            cout<<a<<endl;
        }
        else if(m==5)
        {
            a++;
            cout<<a<<endl;
        }
        else if((n%1)==0)
        {
            a=a+10;
            cout<<a<<endl;
        }
        
        


    }
    
}