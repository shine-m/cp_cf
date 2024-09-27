// allahuakbar
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

        int n;
        cin >> n;
        int x;
        long long sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        ll ans = 0;
        if (n < 3)
            ans = -1;
        else
        {
            sort(v.begin(), v.end());
            int mid = v[floor(n / 2.0)];
            ans += ((ll)2 * n * mid - sum + 1);
            ans = (ans > 0 ? ans : 0);
        }
        cout << ans << ln;
    }
    return 0;
}