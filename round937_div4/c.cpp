#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
    
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        int temp;
        string ext = "AM", ans = "  :   ";

        temp = s[0] - 48;
        temp *= 10;
        temp += s[1] - 48;
        // cout << temp;
        if (temp >= 12)
            ext = "PM";
    
        temp = temp % 12;
        if(temp==0)
            temp = 12;

        // if(temp>9)
        //     ans[0] = "1";
        //     else
        //         ans[0] = "0";

        ans[0] = (char)48 + temp / 10;
        ans[1] = (char)48 + temp % 10;
        ans[3] = s[3];
        ans[4] = s[4];
        ans += ext;

        cout << ans << ln;
}  
 return 0;
}