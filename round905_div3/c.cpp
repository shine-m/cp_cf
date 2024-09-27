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
    int maxx = 0;
    int x;
    int minn = k;

    map<int, int> mp;


    for (int i = 0; i < n;i++){
        cin >> x;
        mp[x % k]++;
        maxx = max(maxx, x % k);
        minn = min(minn, x % k);
    }
  
    if(mp[0]){
        if(k==4){
if(mp[2]>=2)
    maxx = k;
    else
        {
            
        }
        cout << k - maxx << ln;
    }
else
        cout << mp[0]<< ln;
}  
 return 0;
}