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
        map<int, int> mp;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        auto a = mp.begin();
        auto b = ++mp.begin();
        while (1)
        {
            while (a != mp.end() && a->second == 0)
            {
                a++;
            }
            if (a != mp.end())
                a->second = 0;
            else
                break;
            while (b != mp.end() && b->second != 1)
            {
                b++;
            }
            if (b != mp.end())
            {
                b->second = 0;
            }
            else

                break;
        }
        multiset<node> ms;
        int ind = 1;
        for (auto i : mp)
        {
            if (i.second)
            {
                ms.insert({i.second, ind});
                ind++;
            }
        }

        long long turn = (mp.size() - ms.size()) % 2, ans;
        ans = (mp.size() - ms.size()) / 2 + turn;
        // cout << ans << " " << turn << ln;
        for (auto i : ms)
        {
            cout << i.first << " " << i.second << ln;
        }
        cout << ln;

        int used = 0, taken = 0;
        for (auto i : ms)
        {
            if (i.second + turn - used - 1 >= i.first)
            {
                taken++;
                used += i.first;
                turn = 0;
            }
        }

        // cout << ms.size() << " " << taken << ln;
        cout << ans + ms.size() - taken << ln;
    }
    return 0;
}