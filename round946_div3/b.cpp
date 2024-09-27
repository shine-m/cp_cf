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
    string s;

    cin >> s;
    map<char, char> mp;
    for(int i= 0;i<n;i++)
    {
        mp[s[i]] = s[i];
    }

    map<char, char>::iterator b=mp.begin(), r=mp.end();
    int k = mp.size(),l=1;
    r--;
    while(l<k){

        mp[b->first] = r->first;
        mp[r->first] = b->first;
        l++;
        k--;
        b++;
        r--;
    }

   

for(int i= 0;i<n;i++)
{
    cout << mp[s[i]];
}
cout << ln;
}  
 return 0;
}