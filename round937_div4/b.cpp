#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

int n;
cin>>n;
// int k = 0;
for(int i= 0;i<n;i++)
{
     for (int k = 0; k < 2;k++)
     {
        for (int j = 0; j < n; j++)
       {
            if ((i + j) & 1)
                cout << "..";
            else
                cout << "##";
        }
        cout << ln;
        }

    // cout << ln;
    
}


}  
 return 0;
}