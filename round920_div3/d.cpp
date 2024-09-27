#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

long long abs( long long a, long long b){

if ( a>b)
    return a - b;
return b - a;

}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;




while(t--){

    int n, m;
    cin>>n>>m;
    multiset<long long> a, b;
        int x;
    for (int i = 0; i < n;i++){
    cin >> x;
    a.insert(x);
    }

    for(int i= 0;i<m;i++)
    {
        cin>>x;
        b.insert(x);
        }
        multiset<long long>::iterator ita, itar, itb, itbr;
        long long ans = 0;
        ita=a.begin();
        itar = --a.end();
        itb=b.begin();
        itbr = --b.end();

        for(int i=0;i<n;i++){
            if(abs(*ita-*itbr)> abs(*itar-*itb)){
                ans += abs(*ita - *itbr);
                ita++;
                itbr--;
            }
            else 
            {
                ans += abs(*itar - *itb);
                itar--;
                itb++;
            }
        }

        cout << ans << ln;
        
}  
 return 0;
}