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
    string s = "   ";
    if ( n>=28){
        s[2] = 96 + 26;
        n -= 26;
    }
    else {
        s[2] = 96 + n - 2;
        n = 2;
    }
    if ( n>=28){
        s[1] = 96 + 26;
        n -= 26;
    }
    else {
        s[1] = 96 + n - 1;
        n = 1;
    }
    s[0] = 96 + n;

    cout << s << ln;
}  
 return 0;
}