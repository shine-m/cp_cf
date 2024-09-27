#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
#define print(s) cout << s;
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

inline pow(int x, int y)
{
    x = 1;
    while (y--)
    {
        x *= 10;
    }
    return x;
}
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
        int num = n, len = 0;
        while (n > 0)
        {
            len++;
            n /= 10;
        }

        if (len > 2 && num / (int)pow(10, len - 1) == 1 && num % (int)pow(10, len - 1) < pow(10, len - 2) && num % (int)pow(10, len - 2) > 1 && num % (int)pow(10, len - 2) >= pow(10, len - 3))
            cout
                << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}