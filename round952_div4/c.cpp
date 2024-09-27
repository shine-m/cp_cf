#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
 
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        long long n, x;
        cin >> n;
        set<long long> v;
      
        int ans = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum = sum + x;
            v.insert(x);
            if(! (sum%2)){
                auto pos = v.find(sum / 2);
                if(pos != v.end()){
                    ans++;
                }
            }
        }


        cout << ans << ln;
}  
 return 0;
}