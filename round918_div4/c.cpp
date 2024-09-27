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
    long long x;
    cin >> n;
    long long ans = 0;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        ans += x;
    }
// cout<<sqrtl(ans)<< " "<<ceil(sqrtl(ans))<<ln;
    long long det = ceil(sqrtl(ans));
   
    // if(ceil(sqrtl(ans))== sqrtl(ans))
    if(det*det == ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}  
 return 0;
}