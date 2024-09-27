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
    long long prev = x;
    long long prev_ok = x;
    long double times;
    vector<long long> v(n);
    v[0] = 0;
    for (long long i = 1; i < n; i++)
    {

        times = 0;
        cin >> x;
        if(x<prev_ok){

            prev_ok = x;
            if(x<=prev){

            while (x < prev)
            {
                x *= 2;
                times++;
            }
            times += v[i - 1];
            }
            else{
                while(x>=prev){
                x /= 2;
                times--;
                }
                times += v[i - 1];
            }

            prev_ok *= pow(2, times);
        }
        else{
            prev_ok = x;
        }
        v[i] = times;
        ans += times;
        prev = x;
    }
    cout << ans << ln;
}  
 return 0;
}