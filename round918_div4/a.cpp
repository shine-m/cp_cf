#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int a, b, c;
    cin >> a >> b >> c;
    map<int,int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    if(mp[a]==1)
        cout << a << ln;
   else if(mp[b]==1)
        cout << b<< ln;
   else if(mp[c]==1)
        cout << c << ln;
}  
 return 0;
}