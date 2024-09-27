#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 


class node{
    public:
       int  damage,time_gap ;
       long long period;
       node(int f,int s,long long p){
           damage = f;
           time_gap = s;
           period = time_gap+p;
       }

        bool operator<(const node & other) const {
            if(period != other.period)
        return period < other.period;
        else
            return damage > other.damage;
    }
};
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int  n;
    long long h;
    cin >> h >> n;
    int x;
    vector<int> v;
    multiset<node> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        }
        long long ans = 1;
        for (int i = 0; i < n; i++)
        {
            
            cin >> x;
            mp.insert(node(v[i], x,1));
            h -= v[i];
    }


    multiset<node>::iterator it;
    while(h>0){

it = mp.begin();
h -= it->damage;
ans = it->period;
mp.insert(node(it->damage, it->time_gap,it->period));
mp.erase(it);
    }

    cout << ans << ln;
}  
 return 0;
}