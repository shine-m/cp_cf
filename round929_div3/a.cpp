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
    map<int, int> mp;
    int x;
    long long ans=0;
    for(int i= 0;i<n;i++)
    {
        cin >> x;

        mp[x % 3]++;

        ans += x;
    }
//     mp[2] %= 3;
//     mp[1] %= 3;

//     if (mp[2] > mp[1])
//     {
//         ans = 3 - (mp[2] - mp[1]) % 3;
//   }
  if( ans%3 ==2 )
    
  {
      ans = 1;
  }
  else if(ans%3==1){

    if(mp[1])
        ans = 1;
        else
            ans = 2;
  }
  else
      ans = 0;

  cout << ans << ln;
}  
 return 0;
}