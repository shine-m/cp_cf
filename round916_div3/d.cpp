#include<bits/stdc++.h>
using namespace std;
#define ln "\n"


long long max(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}

string s = "a";
class value{
    public:
        int val, index;
        string array;
        value(int val,int index){
            this->val = val;
            this->index = index;
            array = s;
        }

        bool operator< ( const value &a)const{
            return val < a.val;
        }
        bool operator> (const value &a)const{
            return val > a.val;
        }
};

void input( int n,vector<value> &v){
    int x;
    multiset<value, greater<value>> a;
   
    for (int i = 0; i < n;i++){
        cin >> x;
        a.insert(value(x,i));
    }

    int count = 0;
    for(auto  i: a){

        v.push_back(i); // ans.insert(value(i.val, i.index));
        count++;
        if(count==3)
            break;
    }
}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n;
    cin >> n;
   
    vector <value> a,b,c;
    input(n, a);
    s = "b";
    input(n, b);
    s = "c";
    input(n, c);

    long long res = 0;
    for(int i= 0;i<3;i++)
    {
    for(int j= 0;j<3;j++)
    {
        for (int k = 0; k < 3;k++){
            if(a[i].index!=b[j].index && a[i].index!= c[k].index&& c[k].index!= b[j].index)
                res = max(res, a[i].val + b[j].val + c[k].val);
        }
    }
    
    }
    

    cout << res << ln;
    s = "a";
}  
 return 0;
}