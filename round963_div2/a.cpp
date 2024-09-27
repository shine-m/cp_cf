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
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < 4 * n; i++)
        {
            mp[s[i]]++;
        }
        long long ans = 0;
        for (auto i : mp)
        {
            if (i.first != '?')
                ans += (i.second > n ? n : i.second);
        }
        cout << ans << ln;
    }
    return 0;
}