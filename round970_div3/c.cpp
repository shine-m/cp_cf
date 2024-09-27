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

        ll l, r;
        cin >> l >> r;
        ll x = r - l;
        cout << 1 + floor(((sqrtl(8 * x + 1)) - 1) / 2) << ln;
    }
    return 0;
}