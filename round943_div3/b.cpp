#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a;
    cin >> b;
    int ans = 0,i=0,j=0;
    while(a[i] && b[j]){

        if(a[i]==b[j]){
            ans++;
            i++;
        }
        j++;
    }

    cout << ans << ln;
}  
 return 0;
}