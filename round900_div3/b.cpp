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
    for (int i = 0; i < n;i++){
        cout << i * 2 + 1 << " ";
    }
    cout << ln;
}  
 return 0;
}