#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)
            mp[c]++;
        int ans = 0;
        for (auto [x, y] : mp)
        {
            if (y < m)
                ans += abs(y - m);
        }
        string x = "ABCDEFG";
        for (auto c : x)
        {
            bool flag = false;
            for (auto [x, y] : mp)
            {
                if (c == x)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                // cout << c << '\n';
                ans += m;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}