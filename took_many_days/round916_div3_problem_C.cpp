#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

//max function had to be overloaded for long long type
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
    //elements can be taken from av once only and multiple times from bv
    vector<int> av, bv;
    // the greater element will be at the begining;
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
    // the loop will be executed until one of the n  or k  gets exhausted 
    for (int i = 0; i < n && i < k;i++){
        great.insert(bv[i]);
        // we will take the summation of i cumulative elements of a fron av  and  take the largest element of b for rest  (k-i-1) times to make the ans greater;
        // thus if the value gotten  for ith index is greater than ans, then ans will be updated
        ans = max(ans, av[i] + (k - i - 1) * (*great.begin()));
    }
    cout << ans << ln;

    
}  
 return 0;
}