#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    map<char, int> mp;
    for(int i= 0;i<n;i++){
        mp[s[i]]++;
    }
    int ans = 0;
    for (int i = 65; i <= 71;i++)
       { if (mp[i]<m)
               ans += (m - mp[i]);
       
       }
       cout << ans << ln;
}  
 return 0;
}