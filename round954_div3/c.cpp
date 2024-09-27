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
    cin >> n >> m;
    string s;
    cin >> s;
    string c;
    set<int> vs;
        int x;
    for(int i= 0;i<m;i++)
    {
        cin >> x;
        vs.insert(x);
    }

    multiset<char>cs;
    char ch;
    for(int i= 0;i<m;i++)
    {
        cin >> ch;
        cs.insert(ch);
    }

    multiset<char>::iterator it = cs.begin();

    
    
    for(auto i : vs){
        s[i-1] = *it;
        it++;
    }
    cout << s<<ln;
    
}  
 return 0;
}