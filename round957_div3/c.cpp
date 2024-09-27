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
        int i;
        for (i = n; i > m; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= m; i++)
        {
            cout << i << " ";
        }
        cout << ln;
    }
    return 0;
}