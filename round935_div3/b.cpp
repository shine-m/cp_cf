#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    long long int a, b, m,ans=0;

    cin >> a >> b >> m;

    ans += ((m / a +1) + (m / b +1));

    cout << ans << ln;
}  
 return 0;
}

