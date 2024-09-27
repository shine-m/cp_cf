#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long ll;
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
        string s;
        cin >> n;
        cin >> s;
        int len = n;
        for (int k = 1; k < n; k++)
        {
            int det = 0;
            if (!(n % k))
            {
                for (int j = 0; j < k; j++)
                {
                    map<char, int> ch;
                    for (int i = j; i < n; i += k)
                    {
                        ch[s[i]]++;
                    }

                    if (ch.size() > 2)
                    {
                        det = 3;
                    }
                    else if (ch.size() == 2)
                    {
                        int a = ch.begin()->second, b = (++(ch.begin()))->second;
                        det += min(a, b);
                    }
                    if (det > 1)
                        break;
                }
                if (det <= 1)
                {
                    len = k;
                    break;
                }
            }
        }
        cout << len << ln;
    }
    return 0;
}