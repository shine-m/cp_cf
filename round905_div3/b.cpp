#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    for(auto i : s){
        mp[i]++;
    }
    int odd = 0, even = 0;
    for(auto i : mp){
        if(i.second&1)
            {
                odd++;
                even += i.second - 1;
            }
            else
                even += i.second;
    }
if(k>=odd-1)
            cout << "yes\n";
else
            cout << "no\n";
}  
 return 0;
}