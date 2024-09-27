#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

class point{

    public:
        int l, r;
        point(int l, int r){
            this->l = l;
            this->r = r;
        }
};

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

int n;
cin >> n;
int r, l;
int prev = 0, maxx = 0;
vector<point> v;
for(int i= 0;i<n;i++)
{

    cin >> l >> r;
    v.push_back(point(l,r));
    maxx=(abs(l - prev) > maxx) ? abs(l - prev) : maxx;
}
int l = 0, u = maxx;
while(l<=u){
    int mid = l + u;
    mid /= 2;
    bool det = 1;
    for(int i= 0;i<n;i++)
    {
        
    }
    
    if()
}

}  
 return 0;
}