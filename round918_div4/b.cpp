#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    string s;
    int det = 0;
    unordered_map<char, int> ans;
    for (int i = 0; i < 3;i++){
        cin >> s;
        unordered_map<char, int> mp;
        for(int i= 0;i<3;i++)
        {

            mp[s[i]]++;
            if(s[i]=='?'){
                det = 1;
            }

                }
                if (det)
                  {  ans = mp;
                      det = 0;
                  }
    }
    // for(auto i : ans){
    // cout << i.first << " "<<i.second<<ln;
    // }
    // cout << ln;
    
    if(!ans['A'])
        cout << "A" << ln;
    if(!ans['B'])
        cout << "B" << ln;
    if(!ans['C'])
        cout << "C" << ln;
}  
 return 0;
}