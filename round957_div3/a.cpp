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

        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a < b)
                swap(a, b);
            if (a < c)
                swap(a, c);
            if (c > b)
                swap(b, c);
            c++;
        }
        cout << a * b * c << ln;
    }
    return 0;
}