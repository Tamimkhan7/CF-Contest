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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];

    sort(all(a));
    reverse(all(a));
    sort(all(b));

    vector<int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + a[i];

    int ans = 0, idx = -1;
    for (int i = 0; i < k; i++)
    {
        if (b[i] == 1)
        {
            idx++;
            continue;
        }
        int y = idx + b[i] - 1;
        if (y >= n)
            break;
        ans += pref[y] - (idx == -1 ? 0 : pref[idx]);
        idx += b[i];
    }
    if (idx < n - 1)
        ans += pref[n - 1] - pref[idx];

    cout << ans << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}