#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
// using int_max insted of 1e10 caused erroneous answers
inline long long min(long long a,long long b){
    return ((a < b) ? a : b);
}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n;
    int m;
    cin >> n >> m;
        int x, y; 
        int sum = 0;
        vector<int> c, h;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            sum += y;
            c.push_back(x);
            h.push_back(y);
    }

    vector<long long> happiness(sum + 1, 1e10);
    happiness[0] = 0;

    for(long long  i= 0;i<n;i++)
    {
    for(int j= sum;j>=h[i] ;j--)
    {
        if(happiness[j-h[i]]+c[i]<=(long long)i*m)
        happiness[j] = min(happiness[j], happiness[j - h[i]] + c[i]);
    }
   
    }

    

    int ans ;
    for(int i= sum;i>-1;i--)
    {
    if(happiness[i]!=1e10)
    {
        ans = i;
        break;
    }
    }
    cout << ans << ln;
}  
 return 0;
}