#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    // cout << v[0] << v[1] << v[2];
    int count = 0;
    
    if((v[1]%v[0]==0 && v[2]%v[0]==0)){

        for(int i= 1;i<3;i++)
        {
        while(count<=3 && v[i]>=v[0]){
        double det = log2(v[i] / v[0]);
        if(det==round(det)){
            count += (pow(2, det) - 1);
            break;
        }
        else{
            count++;
            v[i] -= v[0];
        }
    }
    cout << i << " " << count << ln;
        }

        if(count<=3)
    cout << "yes\n";
    else
    cout << "no\n";
    }
    else{
        cout << "no\n";
    }
}  
 return 0;
}