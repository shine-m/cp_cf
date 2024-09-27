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
// mp is a map of all factors of input values
    unordered_map<int, int> mp;
    int iter = 0;
    for(int i= 0;i<n;i++)
    {
        int k= 2;
        while(v[i]>=k*k){
            if(! (v[i]%k)){
                v[i] /= k;
                mp[k]++;
                k = 2;
            }
            else
                k++;

            iter++;
        }
        if(v[i]>1)
            mp[v[i]]++;
    }
    bool det = 1;
    for (auto i : mp)
    {
        if ((i.second % n))
        {
            det = 0;
            break;
        }
   }
   cout << (det ? "yes\n" : "no\n");
//    cout << " number of iterations " << iter << ln;
}  
 return 0;
}