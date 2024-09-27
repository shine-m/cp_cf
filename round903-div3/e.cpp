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
vector<int> v;
int x;
for(int i= 0;i<n;i++)
{
    cin >> x;
    v.push_back(x);

}

vector<int> dp(n+1); //n+1 because dp[n-1] is 0 if v[n-1] is 0 and 1 otherwise
                                    // so we had to calcultae dp[n-1] with the same // 
                                    //theory as used for thers.
dp[n] = 0;
for(int i= n-1;i>=0;i--)
{
    int rem = 1 + dp[i + 1];
    int keep=rem;
    if(i+v[i]+1 <=n)
        keep = dp[i + v[i] + 1];

        dp[i]=min(rem,keep);
}

cout << dp[0] << ln;
}  
 return 0;
}