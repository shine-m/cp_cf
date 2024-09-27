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
        string s;
        cin >> s;
        int n0, n1, x;
        n0 = n1 = 0;
        int det = 1;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == 49)
            {
                n1++;
                det = 1;
            }
            else
            {
                if (det)
                    n0++;
                det = 0;
            }
        }

        if (n0 < n1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}