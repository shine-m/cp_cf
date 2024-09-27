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

        int n, m;
        cin >> n >> m;
        long long x;
        vector<long long> v;
        long long length = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        multiset<long long, greater<long long>> s;
        for (auto i : v)

        {
            {
                int temp = i, countt = 0;
                while (temp > 0)
                {
                    temp /= 10;
                    countt++;
                }
                length += countt;
            }
            if (!(i % 10))
            {
                int zero = 0;
                while (!(i % 10))
                {
                    zero++;
                    i /= 10;
                }
                s.insert(zero);
            }
        }
        multiset<long long, greater<long long>>::iterator it = s.begin();
        while (it != s.end())
        {
            length -= *it;
            it++;
            if (it != s.end())
                it++;
        }
        if (length > m)
            cout << "Sasha\n";
        else
            cout << "Anna\n";
    }
    return 0;
}