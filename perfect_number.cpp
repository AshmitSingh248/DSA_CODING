#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int t;
      cin>>t;
      while(t--)
      {
          int n,s=0,i,d;
          cin>>n;
          for(i=1;i<n;i++)
          {
              d=n%i;
              if(d==0)
              s=s+i;
          }
          if(s==n)
          {
              cout<<"true";
          }
          else{
              cout<<"False";
          }
          
      }
      
    //write your code here
    
    return 0;
  }