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
        vector<int> a(n), bit_cnt(32, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int k = 0; k < 32; k++)
            {
                if (a[i] & (1 << k))
                    bit_cnt[k]++;
            }
        }

        // for (int i = 0; i < 32; i++)
        //     cout << i << ' ' << bit_cnt[i] << '\n';
        // cout << '\n';
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            //cout << a[i] << '\n';
            ll curr = 0;
            for (int k = 0; k < 32; k++)
            {
                int ones = bit_cnt[k];
                int zeros = n - ones;
                // show(ones), show(zeros);
                if (a[i] & (1 << k))
                    curr += 1LL * zeros * (1 << k);
                else
                    curr += 1LL * ones * (1 << k);
            }
            ans = max(ans, curr);
        }
        cout << ans << '\n';
    }
    return 0;
}