#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n,x;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
       
        v.push_back(x);


    }
    int l = 1;
    int r = 0;
    int i=1;
    for( ;i<n;i++)
    {
    if( v[i] != v[i-1])
      
          break;

    l++;
    }
    int ans = 0;
    if(v[0]==v[n-1] && i<n)
   {
       r = 1;
       for (int j = n - 2; j > i;j--)
       {
        if(v[j]!=v[j+1])
            break;
           r++;
    }
    ans = n - l - r;
   }
   else if ( i<n){

       r = 1;
       for (int j = n - 2; j >= 0;j--)
       {
        if(v[j]!=v[j+1])
            break;
           r++;
    }

    ans = n - max(l, r);
   }
   else
       ans = 0;

   cout <<ans<< ln;
}  
 return 0;
}