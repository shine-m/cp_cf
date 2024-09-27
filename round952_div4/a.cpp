#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    string a, b;
    cin >> a >> b;
    char s = a[0];
    a[0] = b[0];
    b[0] = s;
    cout << a << " " << b << ln;
}  
 return 0;
}