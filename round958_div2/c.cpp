// bismillahir rahmanir rahim
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
inline string string_reverse(string s)
{

    string ret = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ret += s[i];
    }
    return ret;
}
template <typename t>
inline string integer_to_binary_string(t x)
{
    string s = "";
    while (x > 0)
    {
        s += (x % 2) + 48;
        x /= 2;
    }
    return string_reverse(s);
}
inline long long binary_string_to_integer(string s)
{
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (((long long)s[i] - 48) << (s.size() - i - 1));
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {

        long long int n;
        cin >> n;
        string s;
        s = integer_to_binary_string(n);

        vector<long long> v;
        string aux = s;
        if (s[s.size() - 1] == '1')
            v.push_back(n);
        for (int k = 1; k <= s.size(); k++)
        {
            if (s[s.size() - 1 - k] == '0')
                continue;
            for (int j = s.size() - 1, i = 0; i < k; i++, j--)
            {
                if (s[j] == '0' && aux[j] != '0')
                    s[j] = '1';
                else
                    s[j] = '0';
            }
            long long temp;
            if (temp = binary_string_to_integer(s))
                v.push_back(temp);
        }
        cout << v.size() << ln;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << ln;
    }
    return 0;
}