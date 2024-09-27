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
    int maxx = 0;
    map<char, int> mp;
    for(int i= 0;i<n;i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]> maxx)
            maxx = mp[s[i]];
    }
    int ans = 0;
    if(maxx> n-maxx)
        ans = maxx- n + maxx;
        else if( n&1){
            ans = 1;
        }
        else
            ans = 0;

        cout << ans << ln;
}  
 return 0;
}