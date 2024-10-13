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
        int n, x;
        cin >> n >> x;
        vector<int> v(n), ans;

        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int mx = 0, cnt = 0;

        // if (v[0] / 2 > v[1])
        // {
        //     cout << v[0] << '\n';
        //     continue;
        // }
        for (int i = 0; i < n; i++)
        {
            if (ans.size() != x)
                ans.push_back(v[i]);
            else
            {
                // for (auto x : ans)
                //     cout << x << ' ';
                // cout << '\n';
                int mn = *min_element(all(ans));
                cnt += mn;
                for (int j = 0; j < ans.size(); j++)
                {
                    ans[j] -= mn;
                                }
                ans.clear();
            }
        }
        if (!ans.empty())
            cnt += *max_element(all(ans));
        cout << cnt << '\n';
    }
    return 0;
}