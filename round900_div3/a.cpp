#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, k;
    cin >> n >> k;
    bool done = 1;
    int x,l=-3;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        
        if(done && x==k ){
        if(i-l>=2){
            done = 0;
        }
            l = i;
        }
    }
  if(!done)
        cout << "YES\n";
        else
        cout << "NO\n";
}  
 return 0;
}