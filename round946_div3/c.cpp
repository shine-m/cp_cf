#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n,x;
    cin >> n;
    vector<int> v;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    map<pair<int, int>, multiset<int>> mpf,mps,mpt;
    map<pair<pair<int, int>, int>,int> frf,frs,frt;
    long long ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if(mpt[{v[i],v[i+1]}].find(v[i+2]) == mpt[{v[i],v[i+1]}].end()){
         
            if (!mpt[{v[i], v[i + 1]}].empty())
               { ans += mpt[{v[i], v[i + 1]}].size();
               }
        }
        else 
           { ans += mpt[{v[i], v[i + 1]}].size() - frt[{{v[i],v[i+1]},v[i+2]}];
           }
            mpt[{v[i], v[i + 1]}].insert(v[i + 2]);
            frt[{{v[i], v[i + 1]}, v[i + 2]}]++;

            if (mps[{v[i], v[i + 2]}].find(v[i + 1]) == mps[{v[i], v[i + 2]}].end())
            {

                if (!mps[{v[i], v[i + 2]}].empty())
                {
                    ans += mps[{v[i], v[i + 2]}].size();
                   
                }
        }
        else 
            {
                ans += mps[{v[i], v[i + 2]}].size() - frs[{{v[i], v[i + 2]}, v[i + 1]}];
                
            }
                mps[{v[i], v[i + 2]}].insert(v[i + 1]);
                frs[{{v[i], v[i + 2]}, v[i + 1]}]++;

                if (mpf[{v[i + 1], v[i + 2]}].find(v[i]) == mpf[{v[i + 1], v[i + 2]}].end())
                {

                    if (!mpf[{v[i + 1], v[i + 2]}].empty())
                    {
                        ans += mpf[{v[i + 1], v[i + 2]}].size();
                       
                    }
        } 
        else  
            {ans += mpf[{v[i+1], v[i + 2]}].size() -frf[{{v[i+1],v[i+2]},v[i]}];

            }
                    mpf[{v[i + 1], v[i + 2]}].insert(v[i]);
                     frf[{{v[i+1],v[i+2]},v[i]}]++;
    }
    cout<<ans<<ln;
    
}  
 return 0;
}