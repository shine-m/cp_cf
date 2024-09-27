#include<bits/stdc++.h>
using namespace std;
#define ln "\n"

int pow(int a, int b){

    int res = 1;
    for (int i = 0; i < b;i++)
        res *= a;

    return res;
} 
int main()
{


    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, l;
        cin >> a >> b >> l;
        unordered_set<int> s;
        for (int i = 0; pow(a, i) <= l; i++)
        {
            for (int j = 0; pow(a, i) * pow(b, j) <= l; j++)
            {
                if (l % (pow(a, i) * pow(b, j)))
                    ;
                else
                    s.insert(l / (pow(a, i) * pow(b, j)));
            }
        }
        cout << s.size() << ln;
}  
 return 0;
}