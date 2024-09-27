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

        int flag = s.size();
        for (int i = 1; i < s.size(); i++)
        {
            int det = 0;
            if (!(s.size() % i))
                for (int k = 0; k < i; k++)
                {
                    map<char, int> mp;
                    for (int j = k; j < n; j += i)
                    {
                        mp[s[j]]++;
                    }
                    if (mp.size() > 2)
                    {
                        det = 2;
                        break;
                    }
                    else if (mp.size() == 2)
                    {
                        int l;
                        auto ii = mp.begin();
                        l = ii->second;
                        ii++;
                        l = min(l, ii->second);
                        det += l;
                    }
                    if (det > 1)
                        break;
                }
            if (!(s.size() % i) && det < 2)
            {
                flag = i;
                ;
                break;
            }
        }
        cout << flag << ln;
    }
    return 0;
}