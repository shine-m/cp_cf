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
    cin>>n;
    string x;
    cin >> x;

    int total0  , total1=0;
    for(int i= 0;x[i];i++)
    {

        if(x[i]=='1'){
            total1++;
        }
    }

    total0 = n - total1;
    // cout << x << ln;
    int ans = (total1 >= total0) ? 0 : n;

    int n0 = 0,n1 = 0;
    for (int i = 1; i <= n;i++){
if(x[i-1]== '0'){
    n0++;
    
}
else 
    n1++;

    if(n0>=n1&& (total1-n1)>=(total0-n0)){
        if(abs(n/2.0-i )< abs(n/2.0-ans )){
            ans = i;
        }

    }
    }
    cout << ans << ln;
}  
 return 0;
}
// 7
// 3
// 101
// 6
// 010111
// 6
// 011001
// 3
// 000
// 3
// 110
// 3
// 001
// 4
// 1100
