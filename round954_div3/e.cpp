#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

int n,x;
long long k;
cin >> n >> k;
map<long long,int> mp;
for(int i= 0;i<n;i++)
{
cin>>x;
mp[x]++;
}

map < int, multiset<int, greater<int>>> mps;

for(auto i:mp){
    if ( i.second % 2)
        mps[i.first % k].insert(i.first/k);
}
// to check the mapping of remainders work properly
// for(auto i : mps){
//     cout<<i.first<<" : ";
//     for(auto j : i.second){
//     cout << j << " ";
//     }
//     cout << ln;
    
// }


int det = 0;
long long ans=0;
for(auto i: mps){
    if(i.second.size()%2)
        det++;
    if((!(n%2) && det>0  ) ||(n%2 && det>1))
     {
         det = 10;
         break;
         }
         else{
    long long temp = 0;

    vector <int> v (i.second.begin(), i.second.end());

        

    if(v.size()%2 ){
        //for odd number of elements
        long long cusum ;
        n = v.size();

        for(int i= 2;i< v.size();i++)
        {
            v[i] = v[i] + v[i - 2];
        }
        //fixing first and last element
            if(v.size()>2)
            {
// for first element
                cusum = v[n - 2] - (v[n - 1] - v[0]);
                temp = cusum;
// for last element
                cusum = v[n - 3] - v[n - 2];
                temp = min(temp, cusum);
}

        for (int i = 2; i < n - 2; i+=2)
        {
            cusum = v[i - 2] - v[i - 1] + (v[n - 2] - v[i - 1] - (v[n - 1] - v[i]));
            temp = min(temp, cusum);
}


    }
    else{// for even number of elements in the remainder array
        for(int i= 0;i<v.size()-1;i+=2)
        {
            temp += (v[i] - v[i + 1]);
        }
        
    }
         ans += temp;
         }


   
}

if(det==10)
    cout << "-1\n";
    else
        cout << ans << ln;



}  
 return 0;
}