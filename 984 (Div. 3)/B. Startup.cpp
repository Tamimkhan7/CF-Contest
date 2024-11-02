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
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[x] += y;
        }
        vector<int> val;
        for (auto [x, y] : mp)
            val.push_back(y);
        sort(all(val));
        // for (auto x : val)
        //     cout << x << '\n';
        ll ans = 0;
        while (!val.empty() and n > 0)
        {
            ans += val.back();
            val.pop_back();
            n--;
        }
        cout << ans << '\n';
    }
    return 0;
}