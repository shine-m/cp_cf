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
    
    int k;
    cin >> n>>k;
    int i = n - k;
    for(;i<=n   ;i++)
    {
        cout << i << " ";
    }
    for( i= n-k-1;i>0    ;i--)
    {
        cout << i << " ";
    }


    cout<<ln;
    
    
    
}  
 return 0;
}