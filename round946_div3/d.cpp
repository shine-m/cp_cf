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
    string s;
    cin >> n;
    cin >> s;
    map<char, int> mp, ms, me, mw;
    for(int i= 0;i<n;i++)
    {
        mp[s[i]]++;
    }
    if( (abs(mp['N']-mp['S']))%2 || (abs(mp['E']-mp['W']))%2 || (n==2 && ((mp['N']  && mp['S'])||(mp['E'] && mp['W'])))){
        cout << "NO\n";
    }
    else{

        map<char, bool> h, r;
        h['N'] = true;
        h['S'] = true;
        h['E'] = false;
        h['W'] = false;
       
        for (int i = 0; i < n; i++)
        {
            if(h[s[i]]){
                cout << "H";
                h[s[i]] = false;
            }
            else
            {
                cout << "R";
                h[s[i]] = true;
            }

}
cout << ln;
    }
    

}  
 return 0;
}