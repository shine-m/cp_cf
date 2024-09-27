#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int a, b, c;
    cin >> a >> b >> c;
    int maxx = max(a, b);
    maxx = max(c, maxx);
    int minn = min(a, b);
    minn = min(minn, c);
    cout << maxx - minn << ln;
}  
 return 0;
}