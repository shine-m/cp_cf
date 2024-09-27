#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

    string r = "12345678";
    string c = "abcdefgh";

while(t--){

    char row, col;
    cin >> row >> col;
    for(int i= 0;i<8;i++)
    {
        if(row!=c[i])
            cout << c[i] << col << ln;
    }
    for(int i= 0;i<8;i++)
    {
    if(col!=r[i])
        cout << row << r[i] << ln;
    }
    
    

}  
 return 0;
}