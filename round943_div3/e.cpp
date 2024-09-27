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
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " " << i << ln;
        }
        cout << n - 1 << " " << n << ln;
        cout << n << " " << n << ln;
    }
    return 0;
}