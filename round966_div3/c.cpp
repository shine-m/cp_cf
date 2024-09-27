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
        vector<ll> v(n);
        for (auto &i : v)
            cin >> i;
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            int i = 0;
            vector<ll> mp(26, 1e11);
            map<ll, char> ch;
            int det = 1;
            if (s.length() != n)
                det = 0;
            else
                while (s[i])
                {
                    if (mp[s[i] - 97] == 1e11 && ch[v[i]] == '\0')
                    {
                        mp[s[i] - 97] = v[i];
                        ch[v[i]] = s[i];
                    }
                    else
                    {
                        if (mp[s[i] - 97] != v[i] || ch[v[i]] != s[i])
                        {
                            det = 0;
                            break;
                        }
                    }
                    i++;
                }

            if (det)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}