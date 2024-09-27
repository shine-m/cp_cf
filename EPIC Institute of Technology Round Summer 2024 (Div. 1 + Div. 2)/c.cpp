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
        vector<int> v;

        vector<long long> h(n);
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        h[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] <= h[i + 1])
                h[i] = h[i + 1] + 1;
            else
                h[i] = v[i];
            // -v[i + 1] + h[i + 1];
        }

        cout << h[0] << ln;
    }
    return 0;
}