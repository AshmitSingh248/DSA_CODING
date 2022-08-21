#include <bits/stdc++.h>
#include <stdio.h>
  using namespace std;
  
  int main()
  {
    int X,Y;
    cout<<"Enter the first number"<<endl;
    cin>>X;
    cout<<"Enter the second number"<<endl;
    cin>>Y;
    if(X<Y)
    {
        cout<<X<<" is smaller than "<<Y;
    }
    else if(X>Y){
        cout<<"X is greater than Y";
    }
    else{
        cout<<"X is equal to Y";
    }

    //write your code here
    
    return 0;
  }