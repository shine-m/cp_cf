#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

    

while(t--){

    long long n, p, t, l;
    cin >> n >> p >> l >> t;

    long long total_task =(long long) ceill(n / 7.0);
    long double  double_task_day = total_task / 2;

    long double daily = (2 * t) + l;
    long double req_days = ceill(p / daily);
    long long final_days;
    if( double_task_day>=req_days)
        final_days = req_days;
        else{

            final_days = double_task_day;
            p -= (double_task_day * daily);
            if (total_task  & 1){
                final_days++;
                p -= (t + l);


            }
            if(p>0)
            final_days += (ceill(p /(long double) l));
          
        }
        cout << n - final_days << ln;
                                                           
}
 return 0;}