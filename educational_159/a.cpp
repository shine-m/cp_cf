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
    bool det = 0;
    for(int i= 1;i<s.length();i++)
    {
    
    if(s[i]!=s[i-1])
    {
        det = 1;
        break;
    }

    }

    if(!det && s[0]=='0')
        det = 1;

    cout << ((det ) ?  "YES\n":"NO\n" );
}  
 return 0;
}