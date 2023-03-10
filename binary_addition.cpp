#include <bits/stdc++.h>
#include <string>
Class Solution{
    public :
        string addBinary(string a, string b){
            string res;
int i = a.length - 1;
int j = b.length - 1;
int carry = 0;
while (i > 0 || j > 0)
{
    int sum = carry;
    if (i > 0)
    {
        sum = sum + a.charAt(i--);
    }
    if (j > 0)
    {
        sum = sum + b.charAt(j--);
    }
    carry = sum > 1 ? 1 : 0; // this checks if the sum is greater than 1 or not. If greater than 1 then carry becomes 1 else 0.
    res.append(sum % 2);
}
if (carry != 0) // this is done until the carry becomes 0;
    res = res + to_string(carry);
reverse(res.begin(), res.end());
return res;
}
}
;