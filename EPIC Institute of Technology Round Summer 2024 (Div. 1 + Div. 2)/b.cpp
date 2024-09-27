#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
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
        int x, prev = 0, times = 0;
        long long ans = 0, cum = 0;
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < prev)
            {
                ms.insert(prev - x);
            }
            else
                prev = x;
        }
        times = ms.size() + 1;

        for (auto i : ms)
        {
            if (i - cum < 0)
                break;
            ans += ((i - cum) * (times));
            cum = i;
            times--;
        }
        cout << ans << ln;
    }
    return 0;
}