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

        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        s = "L" + s;
        int current = 0, maxx = m, i = 0, index;

        for (; i <= maxx && i < n + 1; i++)
        {
            if (s[i] == 'L' && i + m > maxx)
            {
                maxx = i + m;
            }
            else if (s[i] == 'W' && k > 0 && i + 1 > maxx)
            {
                maxx = i + 1;
                k--;
            }
        }

        cout << (maxx > n ? "yes" : "no") << ln;
    }
    return 0;
}

// 6 6 2 0 LWLLLW 6 1 1 LWLLLL 6 1 1 LWLLWL 6 2 15 LWLLCC 6 10 0 CCCCCC 6 6 1 WCCCCW

// ans
// yes
// yes
//     no
//         no
//             yes yes
