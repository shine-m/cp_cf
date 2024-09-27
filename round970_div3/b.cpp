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

        int n;
        cin >> n;
        string s;
        cin >> s;
        int n1, n0, tmp1, tmp0;
        n1 = n0 = tmp0 = tmp1 = 0;
        double d = sqrt(n);
        int det = 1;
        if (d == round(d))
        {
            for (int i = 0; i < d; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    if (i == 0 || i == d - 1)
                    {
                        if (s[i * d + j] == '0')
                        {
                            det = 0;
                            break;
                        }
                    }
                    else
                    {
                        if ((j == 0 || j == d - 1))
                        {
                            if (s[i * d + j] == '0')
                            {
                                det = 0;
                                break;
                            }
                        }
                        else
                        {
                            if (s[i * d + j] == '1')
                            {
                                det = 0;
                                break;
                            }
                        }
                    }
                }
            }
            if (det)
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else
            cout << "no\n";
    }
    return 0;
}