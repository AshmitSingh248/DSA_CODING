#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c=0;
        cin>>n;
        while(n>0)
        {
            i=n%10;
            if(i==5)
            {
                c++;
                n=n/10;
            }
            else
            {
                n=n/10;
            }
        }
        cout<<c<<endl;
    }
    //write your code here
    
    return 0;
}