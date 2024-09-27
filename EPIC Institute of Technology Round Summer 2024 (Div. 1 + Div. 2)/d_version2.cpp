
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

class node
{
public:
    int first, second;
    node(int f, int s) : first(f), second(s) {}

    bool operator<(const node &other) const
    {
        if (first != other.first)
            return first < other.first;
        else
            return second < other.second;
    }
};

int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int x;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        int ans = v.size();
        auto i = v.begin(), j = ++v.begin();
        while (1)
        {
            // cout << i->first << " " << j->first << " " << "" << ln;

            while (j != v.end() && j->second > 1)
            {
                j++;
            }

            if (j == v.end())
            {
                v.erase(i);
                break;
            }
            auto a = i;
            if (++a == j)
            {
                if (i != v.end())
                    v.erase(i);
                if (i != v.end())
                    v.erase(i);
            }
            else
            {
                if (j != v.end())
                    v.erase(i);
                v.erase(--j);
            }
        }

        cout << ln;
        for (auto i : v)
        {
            cout << i.first << " " << i.second << ln;
        }
        cout << ln;
        cout << v.size() << ln;

        int turn = (ans - v.size()) % 2;
        ans = ceil((ans - v.size()) / 2.0);
        // cout << "ans\t" << ans << "\tturn\t" << turn << ln;
        multiset<node> ms;
        int ind = 1;
        for (auto i : mp)
        {
            ms.insert({i.second, ind});
            ind++;
        }
        int aux = 0, taken = 0;

        for (auto i : ms)
        {
            // cout << i.first << " " << (turn + i.second - 1 - taken);

            if (i.first <= (turn + i.second - 1 - taken))
            {
                aux++;
                taken += i.first;
                turn = 0;
            }
        }

        // cout << aux << ln;
        // cout << ln;
        cout << ans + (ms.size() - aux) << ln;
    }
    return 0;
}
