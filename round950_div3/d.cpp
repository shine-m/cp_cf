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
    vector<int> v;
    int x;
    for (int i = 0; i < n;i++){

        cin >> x;
        v.push_back(x);

    }
        int det = 1,point;
    for(int i= 1;i<n-1;i++)
    {

       
        if (__gcd(v[i], v[i + 1]) < __gcd(v[i], v[i - 1]))
        {
            point = i;
            det = 0;
            break;

    }

    }
    if (det){
        cout << "YES\n";
    }
        else {

            for (int i = -1; i <= 1; i++)
            {
                det = 1;
                int prev = 0, a;
                if (point + i == 0)
                    a = v[2];
                else
                    a = v[0];
                for (int j = 1; j < n; j++)
                {
                    if (j == point + i)
                    {
                        continue;
                    }
                    int running = __gcd(v[j], a);
                
                    if (prev > running)
                    {
                        det = 0;
                        break;
                    }
                    a = v[j];
                    prev = running;
                }
                if(det){
break;
                }
                


}



if(det)cout<<"YES\n";
else cout<<"NO\n";
}


        }
 
 return 0;
}

/*
12
6
20 6 12 3 48 36
4
12 6 3 4
3
10 12 3
5
32 16 8 4 2
5
100 50 2 10 20
4
2 4 8 1
10
7 4 6 2 4 5 1 4 2 8
7
5 9 6 8 5 9 2
6
11 14 8 12 9 3
9
5 7 3 10 6 3 12 6 3
3
4 2 4
8
1 6 11 12 6 12 3 6

*/