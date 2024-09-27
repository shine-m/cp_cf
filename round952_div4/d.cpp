#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int r, c;
    cin >> r >> c;
    string s;
    vector<string> v;
    int first_x,first_y, last_x,last_y, first_appearance = 1;
    for(int i= 0;i<r;i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for(int i= 0;i<r;i++)
    {
        for(int j= 0;j<c;j++)
        {
        if(v[i][j]=='#'){
if(first_appearance)
{
    first_x = i+ 1;
    first_y = j + 1;
    first_appearance = 0;
}
last_x = i + 1;
last_y = j + 1;
        }
        }
        
    
    }
    

   
    

    cout << (first_x + last_x) / 2 << " " << (first_y + last_y) / 2 << ln;
}

return 0;
}