#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

int dtoi(int x){
    int ans = 0;
    int k = 1;
    while(x>0){
        ans = ans + (x % 2)*k;
        x /= 2;
        k *= 10;
    }
    return ans;
}
int main()
{

    vector<int> memo;
    map<int, int,greater<int>> mp;
    for(int i= 2;i<32;i++)
    {
        mp[dtoi(i)]++;
    }
    

    for(auto i : mp){
    cout << i.first << ln;
    }
    cout << ln;
    
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        bool loop = true;
        while(loop)
      {  int det = 0;
        for(auto i : mp){
       if(n% i.first ){}
       else{
           det = 1;
           n /= i.first;
       }
        }
        if(!det)
            loop = false;
        }

        // cout << n << ln;
        if(n==1)
            cout << "YES\n";
            else
                cout << "NO\n" ;
}  
 return 0;
}