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
    unordered_map<char, int> mp;
    for (int i = 0; s[i];i++){

        mp[s[i]]++;
    }
    int ans = 0;
    for(auto i : mp){
        if(i.second>= i.first-64)
            ans++;
    }
    cout << ans<<ln;
    
}  
 return 0;
}