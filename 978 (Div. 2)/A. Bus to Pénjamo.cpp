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
        int n, r;
        cin >> n >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int ans = 0, cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {

            if (r > 0)
            {
                // cout << v[i] << '\n';
                if (v.size() - 2 == i and v[i] == 1 and v[i + 1] == 1 and r < 2)
                    break;
                else if (v[i] % 2 == 0)
                {
                    ans += v[i];
                    r -= v[i] / 2;
                }
                else if (v[i] == 1)
                {
                    ans += v[i];
                    r--;
                }
                else if (v[i] % 2 != 0 and v[i] != 1)
                {
                    ans += v[i] - (v[i] % 2);
                    r -= v[i] / 2;
                    v.push_back(1);
                }
            }
            sort(v.rbegin(), v.rend());
            // for (auto x : v)
            //     cout << x << ' ';
            // cout << '\n';
        }
        // cout << r << ' ' << cnt << '\n';
        cout << ans << '\n';
    }
    return 0;
}