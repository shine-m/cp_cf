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
        vector<int> v(n);
        vector<int> dp(n + 1, 0);
        int x;
        for (auto &i : v)
        {
            cin >> i;
        }
        if (v[0] != 1)
            dp[v[0] - 1] = 1;
        if (v[0] != n)
            dp[v[0] + 1] = 1;
        int det = 1;
        for (int i = 1; i < n; i++)
        {
            if (dp[v[i]] == 1)
            {
                if (v[i] != 1 && dp[v[i]] != 2)
                    dp[v[i] - 1] = 1;
                if (v[i] != n && dp[v[i]] != 2)
                    dp[v[i] + 1] = 1;
                dp[v[i]] = 2;
            }
            else
            {
                det = 0;
                break;
            }
        }
        cout << (det ? "yes" : "no") << ln;
    }
    return 0;
}