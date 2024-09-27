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
        long long c;
        int h;
        vector<int> happiness, cost;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c >> h;
            cost.push_back(c);
            happiness.push_back(h);
            sum += h;
        }
        vector<long long> row(sum + 1, 1e10);
        row[0] = 0;
        vector<vector<long long>> dp(n + 1, row);

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= sum; j++)
            {
                if (j >= happiness[i - 1])
                {
                    if ((long long)(i - 1) * m >= cost[i - 1] + dp[i - 1][j - happiness[i - 1]])
                        dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - happiness[i - 1]] + cost[i - 1]);

                    else
                        dp[i][j] = dp[i - 1][j];
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }

        int ans = 0;
        for (int i = sum; i >= 0; i--)
        {
            if (dp[n][i] != 1e10)
            {
                ans = i;
                break;
            }
        }
        cout << ans << ln;
    }

    return 0;
}