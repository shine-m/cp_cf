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
    vector<int> a, b;
    int x;
    for(int i=0 ;i<n;i++)
    {
        cin >> x;
        a.push_back(x);
    }
    map<int, int> mpb;
    for(int i=0 ;i<n;i++)
    {
        cin >> x;
        b.push_back(x);
        mpb[x] = 1;
    }

    int m;
    cin >> m;
    map<int, int> mp;
    for(int i= 0;i<m;i++)
    {
        cin >> x;
        mp[x]++;
    }
    int det = 1;
    for (int i = 0; i < n;i++){
        if(a[i] != b[i])
        {
            if(mp[b[i]])
                mp[b[i]]--;
                else {
                    det = 0;
                    break;
                }
        }
    }

    if(det && mpb[x]) 
     cout<<"YES\n";
    else
    cout<<"NO\n";
    
    
}  
 return 0;
}