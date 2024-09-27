#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

  
    int a, b, c;
    cin >> a >> b >> c;
    long long ans = a;
    if( c<(3-b%3)%3)
        ans = -1;
        else
    ans += ceil((b + c) / 3.0);

        cout << ans << ln;
}  
 return 0;
}