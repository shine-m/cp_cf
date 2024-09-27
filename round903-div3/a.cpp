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
    int result = -1,temp=0;
    cin >> n >> m;
    string s, x;
    cin >> x >> s;
    do{
        if(x.find(s)!= string:: npos){
            result = temp;
            break;
        }
        temp++;
        x += x;
    } while (x.length() <= 2 * s.length() 
    || temp<3 );
    cout << result << ln;
}  
 return 0;
}