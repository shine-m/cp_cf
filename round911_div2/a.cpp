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
    char x, prev;
    int ans = 0;
    int det = 0,ddet=1;
    if(n>1){
    cin >> x;
    prev = x;
    if(x=='.')
        det++;
    }
    map<int, int> mp;
    for(int i= 1;i<n-1;i++)
    {
        cin >> x;
       if(x=='.'){
           det++;
          
        }
        else{

           (det >= 3 ? mp[3]++ : mp[det]++);
            det = 0;
            
        }

    }

    cin >> x;
    if(x=='.')
    {
        det++;
        (det >= 3 ? mp[3]++ : mp[det]++);
        }
        else
         (det >= 3 ? mp[3]++ : mp[det]++);
    if (mp[3])
        ans = 2;
    else
        ans = mp[1] + mp[2]*2;
    cout << ans << ln;
}  
 return 0;
}