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
        vector<int> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        int ans = 0;
        int amount = 0;
        for (auto i : v)
        {
            if (i >= k)
                amount += i;
            if (i == 0 && amount > 0)
            {
                amount--;
                ans++;
            }
        }
        cout << ans << ln;
    }
    return 0;
}