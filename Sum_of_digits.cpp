#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int n,r,s=0;
      cin>>n;
      while(n>0)
      {
          r=n%10;
          s+=r;
          n=n/10;
          
      }
      cout<<s;
    //write your code here
    
    return 0;
  }