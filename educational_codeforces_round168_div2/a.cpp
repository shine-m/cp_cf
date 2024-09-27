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

        string s, ans;
        cin >> s;
        int n = s.length();
        int in = 1;
        for (int i = 0; i < n; i++)
        {
            ans += s[i];
            if (in && i < n - 1 && s[i] == s[i + 1])
            {
                in--;
                ans += 97 + (s[i] - 96) % 26;
            }
        }
        if (in)
            ans += 97 + (s[n - 1] - 96) % 26;
        cout << ans << ln;
    }
    return 0;
}