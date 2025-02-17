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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> vv(all(v));
        ll ans = 0, res = 0;
        reverse(all(vv));
        // for (auto x : vv)
        //     cout << x << ' ';
        // cout << '\n';
        int pos = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (vv[i] < 0)
            {
                if (ok)
                {
                    res = max(ans, res);
                    ans = 0;
                    ok = false;
                }
                ans += abs(vv[i]);
            }
            else
            {
                ans += vv[i];
                ok = true;
            }
        }
        res = max(ans, res);
        // show(ans);
        // show(pos);
        // if (ok)
        //     pos++;
        // // vv.erase(vv.begin(), vv.begin() + pos);
        // for (int i = pos; i < (int)vv.size(); i++)
        // {
        //     if (vv[i] > 0)
        //         ans += vv[i];
        //     else
        //         break;
        // }
        cout << res << '\n';
    }
    return 0;
}