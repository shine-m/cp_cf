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

    long long sum = 0;
    int x;
    vector<int> v;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        sum += x;
        v.push_back(x);
    }

    sum /= n;
    x = 0;
    bool det = 2;
    for(int i= 0;i<n;i++)
    {
    if(v[i]>=sum){
        x += (v[i] - sum);
       
    }
    else{
        x=(x-(sum-v[i]));
        if(x<0)
    {det= 0;
        break;
    }
    }
    }

    if( det)
        cout << "YES" << ln;
        else
            cout << "NO\n";
}  
 return 0;
}