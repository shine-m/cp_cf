#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int x, y;
    cin >> x >> y;

    int ny = (y+1)/ 2;
    int total = ny * 15 - y * 4;
    int forx = 0;
    if(total - x < 0)
    forx = ceil((( x-total)) / 15.0);

    cout << ny + forx << ln;
}  
 return 0;
}