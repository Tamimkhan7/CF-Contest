#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    reverse(all(v));
    vector<int> vv(all(v));

    int ans = 0, l = 0;
    while (l < n)
    {
        int cnt = 0;
        for (int i = l; i < n; i++)
        {
            if (v[i] <= c)
                cnt++;
            for (int j = i + 1; j < n; j++)
                v[j] *= 2;
        }
        ans = max(ans, cnt);
        v = vv;
        l++;
    }
    cout << n - ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}