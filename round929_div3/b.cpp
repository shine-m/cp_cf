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
    int x;
    long long ans = 0;
    for (int i = 0; i < n; i++){

        cin >> x;

        if(x<0)
            ans += (-1) * x;
            else
                ans += x;
    }

    cout << ans << ln;
}  
 return 0;
}