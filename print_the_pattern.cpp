#include <bits/stdc++.h>
using namespace std;
void printpat(int n)
{
    cout << n<<" ";
    if (n <= 0)
        return;
    printpat(n - 5);
    cout<<n<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        printpat(i);

    }
    
    // write your code here

    return 0;
}