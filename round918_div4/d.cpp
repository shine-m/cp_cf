#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans="";
    for(int i= n-1;i>1;i--)
    {
    if(s[i]=='a' || s[i]=='e'){
        if (s[i - 1] == 'b' || s[i - 1] == 'c' || s[i - 1] == 'd'){
            ans += s[i];
            ans += s[i - 1];
            ans += '.';
            i -= 1;
        }
    }
    else{
        ans += s[i];
    }
    }
    ans += s[1];
    ans += s[0];
    for(int i= ans.length()-1;i>=0;i--)
    {
        cout << ans[i];
    }
    cout << ln;
}  
 return 0;
}