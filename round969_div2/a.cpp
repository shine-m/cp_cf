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

        int l, n;
        cin >> l >> n;
        int ans;
        if (l & 1)
        {
            ans = (n - l + 1) / 4;
            if ((n - l + 1) % 4 == 3)
                ans += 1;
        }
        else
        {
            ans = (n - l) / 4;
            if ((n - l) % 4 == 3)
                ans += 1;
        }
        cout << ans << ln;
    }
    return 0;
}