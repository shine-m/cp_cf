// Alhamdulillah, all praise to almighty ALLAH SWT
#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long t;
cin>>t;

while(t--){

    int n;
    cin >> n;

     long long x;
    long long ans = 0;
    cin >> x;

    long double prev = x;
     long long times;
    for (int i = 1; i < n;i++){
        cin >> x;
        times = (long long )ceill(log2l((prev /(long double)x)) );
        if(times>0)
            {
                ans += times;
                prev = x << (long long)times;
            }
            else prev = x;

    }
    cout << ans << ln;
}  
 return 0;
}