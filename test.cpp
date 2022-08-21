#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, n , a, x, j;

    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    int even[a];
    int odd[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (a = 0; a < n; a++)
    {
        cout << arr[a];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        cout<<arr[i];
        
            
        
            

      
    }
   
    
    // write your code here

    return 0;
}