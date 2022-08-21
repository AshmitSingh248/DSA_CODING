#include <bits/stdc++.h>
  using namespace std;     // this is for sum of array elements
  
  int main()
  {
      int t;
      cout<<"Enter the test cases";
      cin>>t;
      while(t--)
      {
          int i,n,a,x,pro=1;
          cout<<"Enter the size of array";
          cin>>n;
          int arr[n];
          for(i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          for (a=0;a<i;a++)
          {
              cout<<arr[a];
          }
          for(x=0;x<a;x++)
          {
              pro=pro*arr[x];
          }
          cout<<pro;

      }
    //write your code here
    
    return 0;
  }