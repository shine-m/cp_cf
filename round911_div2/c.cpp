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
    long long maxx, minn;

    int e = -2, o = -2;

    long long tempsum = 0,sum=LLONG_MIN;

    for (int i = 0; i < n;i++){

        cin >> x;
        if(x&1)// odd
        {
            o = i;
            if(e==i-1 && x+tempsum>x){
                tempsum += x;
            }
        else
        {
            tempsum = x;
        }

        }

        else// even
        {
            e = i;
            if(o==i-1  && x+tempsum>x)
            {
                tempsum += x;
            }
            else{
                tempsum = x;
            }
        }


            sum = max(sum, tempsum);

    }
    cout << sum << ln;
}  
 return 0;
}