#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double q;
        double c;
        cin>>q>>c;
        if(q<=100.0)
        {
            cout<<fixed<<setprecision(2)<<q*c<<endl;
        }
        if(q>100.0)
        {
            c=c-(c*0.2);
            cout<<fixed<<setprecision(2)<<q*c<<endl;
        }

    }
    //write your code here
    
    return 0;
}