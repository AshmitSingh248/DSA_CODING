#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the year";
        cin>>n;
        
        
        if((n%4==0) && (n%100!=0) || (n%400==0))
        {
            cout<<"It is a leap year"<<endl;
        }
        else
        {
            cout<<"It is not a leap year"<<endl;
        }
    }
    return 0;
}