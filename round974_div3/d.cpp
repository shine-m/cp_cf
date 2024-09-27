#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long ll;
#define loop(n) for (int i = 0; i < n; i++)
#define print(s) cout << s;

class node
{
public:
    int l, r;
    node()
    {
        this->l = 0;
        this->r = 0;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n, k, d;
        cin >> n >> d >> k;
        vector<node> v(n + 1);

        int l, r;
        for (int i = 0; i < k; i++)
        {
            cin >> l >> r;
            v[l].l++;
            v[r].r++;
        }
        for (auto i : v)
        {
            cout << i.l << " " << i.r << ", ";
        }
        cout << ln;

        int mo = n + 1, bo = -1, mi = -1, bi = n + 1, temp = 0;
        for (int i = 1; i < d; i++)
        {
            temp += v[i].l;
            // if (mo > temp)
            // {
            //     mo = temp;
            //     // mi = i;
            // }
            // if (bo < temp)
            // {
            //     bo = temp;
            //     // bi = i;
            // }
            temp -= v[i].r;
        }
        mi = 1;
        bi = 1;
        for (int i = d; i <= n; i++)
        {
            temp += v[i].l;
            if (mo > temp)
            {
                mo = temp;
                mi = i - d;
            }
            if (bo < temp)
            {
                bo = temp;
                bi = i - d;
            }
            temp -= v[i - d].r;
            cout << "\\\t" << i << " " << temp << ln;
        }
        cout << bi + 1 << " " << mi + 1 << ln;
    }
    return 0;
}