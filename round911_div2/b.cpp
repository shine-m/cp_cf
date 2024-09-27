#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int solve(int a,int b, int c){


    if(abs(b-c)%2==0 && b && c){

        return 1;
    }

    return 0;
}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    vector<int> ans;

    for(int i= 0;i<3;i++)
    {
        ans.push_back(solve(v[i],v[(i+1)%3],v[(i+2)%3]));
    }


    for(auto i : ans){
    cout << i << " ";
    }
    cout << ln;
    
    
}  
 return 0;
}