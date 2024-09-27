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

        int n, k;
        cin >> n >> k;
        int x, maxx = 0;
        for (int i = 0; i < k; i++)
        {

            cin >> x;
            if (x > maxx)
                maxx = x;
        }

        cout << n - maxx - k + 1 + (n - maxx) << ln;
    }
    return 0;
}