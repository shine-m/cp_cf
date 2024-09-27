#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

   long long  int l, h, w,k;
    cin >> l >> h >>w>> k;
    long long i, j, m;
    long long ans = 0;
    for( i= 1;i<=l;i++)
    {
    for( j= 1;j<=h;j++)
    {
            if(!(k%(i*j) &&  k/(i*j)<=w))
                {
                    m = k / (i * j);
                    ans = max(ans, (l - i + 1) * (h - j + 1) * (w - m + 1));
                }
    
       
    }
  
    }
    // cout << i << " " << j << " " << m << ln;
    cout<<ans<<ln;
    
    
    
}  
 return 0;
}