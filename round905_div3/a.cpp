#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n;
    cin >> n;
    int cur = 1;
    int ans = 0;
    int divisor = 1000;
    for (int i = 0; i < 4;i++,divisor/=10){
        if(n/divisor)
        {ans += (abs(n / divisor - cur)+1);
        cur = n / divisor;}
        else
        {ans += (abs(10 - cur)+1);
        cur = 10;}

        n %= divisor;
    }
    cout << ans << ln;
}  
 return 0;
}