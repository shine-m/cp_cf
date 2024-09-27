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
    int temp = 501;
    int x;
    vector<int> v;
   

    v.push_back(temp);
  
    

    for (int i = 0; i < n - 1; i++)
    {

        cin >> x;
        v.push_back(temp = temp + x);
    }
    for(auto i : v){
    cout << i << " ";
    }
    cout << ln;
    
}  
 return 0;
}