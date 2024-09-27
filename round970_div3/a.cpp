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
        int a, b;
        cin >> a >> b;
        if ((a % 2 == 0) && (b % 2 == 0))
        {
            cout << "yes\n";
        }
        else if (a % 2 == 0 && b & 1)
        {
            if (a > 0)
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else
            cout << "no\n";
    }
    return 0;
}