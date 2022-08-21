#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int n;
      cin>>n;
      int m=0;
      while(n--)
      {
          int t,c;
          cin>>t>>c;
          if((c-t)>1)
          m++;
          }
      cout<<m;
    
    //write your code here
    
    return 0;
  }