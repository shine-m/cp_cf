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
    int x;
    bool det = false,yes=true;
    long long sum = 0;
    unordered_map<long long, long long> mp;
    mp[0] = 1;
    for(int i= 0;i<n;i++)
    {
        cin >> x;

        if(i&1){
            sum -= x;
        }
        else
            sum += x;
        mp[sum]++;
        
        if(yes && mp[sum]==2){
            det = true;
            yes = false;
        }
    }
    if(det)
        cout << "YES\n";
        else
            cout << "NO\n";
}  
 return 0;
}