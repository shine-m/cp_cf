#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

inline long long max ( long long a, long long b){
    if ( b>a)
        return b;
    return a;
}

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, k,x;
    cin >> n >> k;
    vector<int> av, bv;
    set<int,greater<int>> great;

    // inputting  the first element of  array a
    cin >> x;
        av.push_back(x);
// now we will insert cumulative  summation of array a in ith index
    for (int i = 1; i < n;i++){
        cin >> x;
        av.push_back(x+av[i-1]);
    }
    for (int i = 0; i < n;i++){
        cin >> x;
        bv.push_back(x);
    }
    long long ans = 0;
    for (int i = 0; i < n && i < k;i++){
        great.insert(bv[i]);
        ans = max(ans, av[i] + (k - i - 1) * (*great.begin()));
    }
    cout << ans << ln;

    
}  
 return 0;
}