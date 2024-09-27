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

        int n, pb, ps;
        int k;
        cin >> n >> k >> pb >> ps;
        vector<int> p;
        vector<long long> a;
        long long x;
        p.push_back(0);
        a.push_back(0);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            p.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        long long pointb = 0, points = 0, linearb = 0, linears = 0;
        long long times = k;
        k = min(k, n);
        for (int i = 0; i < k; i++)
        {
            pointb = max(pointb, linearb + (times - i) * a[pb]);
            linearb += a[pb];
            pb = p[pb];

            points = max(points, linears + (times - i) * a[ps]);
            linears += a[ps];
            ps = p[ps];
        }

        if (pointb == points)
            cout << "Draw";
        else
            cout << (pointb > points ? "Bodya" : "Sasha");
        cout << ln;
    }
    return 0;
}