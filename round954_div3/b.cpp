#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;

while(t--){

    int n, m;
    cin >> n >> m;
    vector<int> row(m);
    vector<vector<int>> v(n,row);
    int x;
    for(int i= 0;i<n;i++)
    {
    for(int j= 0;j<m;j++)
    {
        cin >> x;
        v[i][j] = x;
    }
    }

    for(int i= 0;i<n;i++)
    {
        
        for (int j = 0; j < m; j++)
        {
            multiset<int,greater<int>> ms;
            if (i - 1 >= 0)
                ms.insert(v[i - 1][j]);
                if(i+1<n)
                    ms.insert(v[i + 1][j]);
                    if(j-1>=0)
                        ms.insert(v[i][j - 1]);
                        if(j+1<m)
                            ms.insert(v[i][j + 1]);

                            if(v[i][j]>*ms.begin())
                                v[i][j] = *((ms.begin()));
    }
    
    }
    for(int i= 0;i<n;i++)
    {
    for(int j= 0;j<m;j++)
    {
        cout << v[i][j] << " ";
    }
    cout << ln;
    }
    
    
}  
 return 0;
}