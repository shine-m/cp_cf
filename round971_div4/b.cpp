#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
#define print(s) cout << s;
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            int ind = 0;
            for (int j = 0; j < 4; j++)
            {
                if (v[i][j] == '#')
                {
                    ind = j + 1;
                    break;
                }
            }
            cout << ind << " ";
        }
        cout << ln;
    }
    return 0;
}