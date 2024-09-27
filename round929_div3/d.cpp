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
    int x;
    map<int, int> mp;
    for(int i= 0;i<n;i++)
    {
        cin >> x;
        mp[x]++;
    }
    
    if(mp.begin()->second>1){
        
        map<int, int>::iterator it = mp.begin();
        it++;
        int det=0, mini = mp.begin()->first;
        while(it!= mp.end() ){

            if(it->first % mini){
                det = 1;
                break;
            }
            it++;
        }
        if(det)
            cout << "yes\n";
            else cout<<"no\n";
            
    }
    else
        cout << "yes\n";
}  
 return 0;
}   