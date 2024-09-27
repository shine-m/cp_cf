// free palestine
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
        ll ans = 0;
        vector<ll> v;
        int x;
        v.push_back(0);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> x;
            v.push_back(x + v[i - 1]);
        }
        string s;
        cin >> s;
        s = "A" + s;
        int l = 1, r = s.length();
        while (l < r)
        {
            while (s[l] != 'L' && l != r)
            {
                l++;
            }
            while (s[r] != 'R' && l != r)
            {
                r--;
            }
            if (l != r)
                ans += v[r] - v[l - 1];
            l++;
            r--;
        }
        cout << ans << ln;
    }
    return 0;
}