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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        set<int> se;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            se.insert(v[i]);
            cnt[v[i]]++;
        }
        vector<int> res(all(se));
        int cur = cnt[res[0]];
        int ans = cur;

        deque<int> dq;
        dq.push_back(cur);

        for (int i = 1; i < res.size(); i++)
        {
            if (dq.size() == k)
            {
                cur -= dq.front();
                dq.pop_front();
            }
            if (res[i] != res[i - 1] + 1)
                cur = 0, dq.clear();
            cur += cnt[res[i]];
            dq.push_back(cnt[res[i]]);
            ans = max(ans, cur);
            // cout << ans << ' ' << cur << '\n';
        }
        cout << ans << '\n';
    }
    return 0;
}
// for (auto x : dq)
//     cout << x << ' ';
// cout << '\n';

// for (auto [x, y] : cnt)
//     res.push_back(y);
// sort(all(res), greater<int>());
// int ans = 0;
// for (int i = 0; i < k; i++)
//     ans += res[i];