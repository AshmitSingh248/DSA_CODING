#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && y<z)
    {
        cout<<"X is second smallest";
    }
    else if(y>x && y<z)
    {
        cout<<"Y is the second smallest";
    }
    else
    {
        cout<<"Z is the second smallest";
    }
    
    //write your code here
    
    return 0;
}