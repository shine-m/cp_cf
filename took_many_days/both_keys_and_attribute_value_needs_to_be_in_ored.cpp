#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main()
{
    cout << ln << ln;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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

    set<node> s = {{3, 6}, {3, 3}, {2, 5}, {3, 10}};
    for (auto i : s)
    {
        cout << i.first << " " << i.second << ln;
    }
    cout << ln;

    cout << ln << ln << ln;
    return 0;
}