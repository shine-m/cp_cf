// ALLAHU AKBAR
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
        ll x, y, k;
        cin >> x >> y >> k;
        x = ceil(x / (double)k);
        y = ceil(y / (double)k);
        ll tmp = max(x, y);
        tmp *= 2;
        if (y != max(x, y) && x != 0)
            tmp--;
        cout << tmp << ln;
    }
    return 0;
}