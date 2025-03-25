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

bool ok(int mid, int n, int m, int k)
{
    int curr = m / (mid + 1);
    int rem = m % (mid + 1);
    int ans = curr * mid + rem;
    return (ans * n) >= k;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int l = 1, r = m, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (ok(mid, n, m, k))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}