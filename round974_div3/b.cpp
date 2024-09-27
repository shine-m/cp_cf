#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long ll;
#define loop(n) for (int i = 0; i < n; i++)
#define print(s) cout << s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int det = 0;
        if (k == n)
        {
            int t = ceil(n / 2.0);
            if (!(t & 1))
                det = 1;
        }
        else
        {
            int t = ceil(n / 2.0);
            int sub = ceil((n - k) / 2.0);
            // cout << t << " " << sub << ln;
            if (!((t - sub) & 1))
                det = 1;
        }

        if (det)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}