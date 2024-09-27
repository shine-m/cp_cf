// alhamdulillah
#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

long long abs( long  long a, long long b){

    if( a>b)
        return a - b;

    return b - a;
}
int main()
{

    // mp.insert({{3, 2}, 6});
    // mp[{3, 2}]++;
    // cout << mp[{3, 2}] << ln;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n, x, y;
        cin >> n >> x >> y;
        vector<long long> v;
        int s;
        for (int i = 0; i < n; i++)
        {

            cin >> s;
            v.push_back(s);
    }
    map<pair<int, int>, int> mp;
    long long int ans = 0;
        mp[{v[0] % x, v[0] % y}]++;
    for(int i= 1;i<n;i++)
    {
        ans += mp[{(x - (v[i] % x))%x, v[i] % y}];
        
        mp[{v[i] % x, v[i] % y}]++;

    }
    cout << ans << ln;
}
 return 0;
}