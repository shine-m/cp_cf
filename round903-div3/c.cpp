#include<bits/stdc++.h>
using namespace std;
#define ln "\n"

char fgreater(set<char> s){
    return *--s.end();

}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int t;
cin>>t;

while(t--){

    int n;
    cin >> n;
    vector<string> v;
    string s;
    for(int i= 0;i<n;i++)
    {
        cin >> s;
        v.push_back(s);
    }
    int ans = 0,k=n;
    n--;
    for (int i = 0; i < k / 2;i++){
        for(int j= i;j<k-i-1;j++){
            // cout << v[i][j]<< v[n - j][i]<< v[n - i][n - j]<< v[j][n - i] << ln;
            char lar = fgreater( set<char>  {v[i][j] , v[n - j][i] , v[n - i][n - j] , v[j][n - i]});
            ans += (int)(4 * lar - v[i][j] - v[n - j][i] - v[n - i][n - j] - v[j][n - i]);
        }


    }
    cout << ans << ln;
}
 return 0;
}
