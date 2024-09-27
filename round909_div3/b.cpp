#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

   long long  int n,x;
    cin >> n;
    vector<long long int> v;
    v.push_back(0);
    for (int i = 1; i <= n;i++){
        cin >> x;
        v.push_back(x + v[i - 1]);
    }
    // for(auto i : v){
    // cout << i << " ";
    // }
    // cout << ln;
    
    long long int final_max = 0;
    for (int i = 1; i < n;i++){
        if(!(n%i))
         {
    long long int maxx = 0;
    long long  int minn = LLONG_MAX;
            //  cout << "i=\t" << i << ln;
             for (int j = n; j > 0; j -= i)
             {
                 maxx = max(maxx, v[j] - v[j - i]);
                 minn=min(minn,v[j]-v[j-i]);
            }
            final_max=max(final_max,maxx-minn);
            // cout << "maxx=\t" << maxx << ln;
            }
    }
    cout << final_max << ln;
}  
 return 0;
}