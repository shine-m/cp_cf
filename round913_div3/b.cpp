#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

string s,ans="";
cin>>s;
int isb=0, isB = 0;
for(int i= s.length()-1;i>=0;i--)
{
if(s[i]=='b')
isb++;
else if(s[i]== 'B')
    isB ++;
    else if(s[i]>96 && s[i]<123 )
       {
        if(isb>0)
        {
            isb --;
        }
        else{
            ans += s[i];

        }
       }
        else if (s[i]>64 && s[i]<91 )
            {
                if(isB>0)
        {
            isB --;
        }
        else{
            ans += s[i];

        }
            }
}
reverse(ans.begin(), ans.end());
cout << ans << ln;
}  
 return 0;
}