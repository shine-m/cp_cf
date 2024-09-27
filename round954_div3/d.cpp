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
    string s;
    cin >> s;
    vector<int> v;
    for(int i= 0;i<n;i++)
    {
        v.push_back(s[i] - 48);
    }
    long long temp,ans = 1e10;


    for(int i= 0;i<n-1;i++)
    {
        int j;
        if(i==0){
            temp=v[0]*10 + v[1];
            j = 2;
        }
        else{
            temp = v[0];
            j = 1;
        }
        for (; j < n; j++)
        {
            if (j == i){
        temp = min(temp * (v[j] * 10 + v[j + 1]), temp + (v[j] * 10 + v[j+ 1]));
        j++;
    }
    else
        temp = min(temp * v[j], temp + v[j]);
    }
    ans = min(temp, ans);
    }
    cout << ans << ln;
}  
 return 0;
}