#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int f, n, k;
    cin >> n >> f >> k;
    vector<int> v;
        int x;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int temp = v[f - 1];

    sort(v.begin(), v.end(), greater<int>());

        
// cout<<(k==n || v[k ]<temp)<<ln;

   if (k==n || v[k ]<temp)
        cout << "YES\n";

   else if (v[k ]== temp && temp==v[k-1])
        cout << "MAYBE\n";
    else 
        cout << "NO\n";

}  
 return 0;
}