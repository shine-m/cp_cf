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

        int n, k;
        cin >> n >> k;
        int dec = k - 1;
        int turn = 0;
        for (int i = n; i > 1; i -= dec)
        {

            turn++;
        }
        cout << turn << ln;
    }
    return 0;
}