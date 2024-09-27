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
        multiset<ll> s;
        int x;

        ll maxx = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x & 1)
            {
                odd++;
                if (x > maxx)
                    maxx = x;
            }
            else
                s.insert(x);
        }
        if (odd == 0 || odd == n)
        {
            cout << "0\n";
            continue;
        }
        int ans = n - odd;

        for (auto i : s)
        {

            if (!(i & 1))
            {
                if (maxx > i)
                    maxx = maxx + i;
                else
                {

                    ans++;
                    break;
                }
            }
        }
        cout << ans << ln;
    }
    return 0;
}