#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int ans = 0;
        multiset<int> se;
        int zero = 0, one = 0;
        for (int r = 0; r < n; r++)
        {
            if (s[r] == '0')
                se.insert(s[r]);
            else
                se.clear();
            if ((int)se.size() == m)
            {
                // cout << se.size() << ' ' << r << '\n';
                ans++;
                for (int i = r; i < k + r and i < n; i++)
                    s[i] = '1';
                r = k + r - 1;
                se.clear();
            }
        }
        cout << ans << '\n';
    }
    return 0;
}