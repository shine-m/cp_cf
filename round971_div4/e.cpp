// #free palestine#
// Allahu Akbar
#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
#define print(s) cout << s;
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;
inline ll abss(ll a)
{
    if (a > 0)
        return a;
    return -1 * a;
}
inline ll summation(ll d)
{
    return d * (d + 1) / 2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        long double n, k;
        cin >> n >> k;

        long double ind = ceill(floorl(sqrtl((4 * k - 2) * (4 * k - 2) - 4 * 2 * (n - n * n - 2 * k * n)) - (4 * k - 2)) / 4.0);
        ll start = (ind - 1 >= 0 ? ind - 1 : ind);
        start += (k - 1);

        long long ans = LLONG_MAX, fixed_total = summation(n + k - 1);
        for (int i = start; i < start + 6 && i < n + k; i++)
        {
            ans = min(ans, abss(fixed_total - summation(i) - (summation(i) - summation(k - 1))));
        }
        cout << ans << ln;
    }
    return 0;
}