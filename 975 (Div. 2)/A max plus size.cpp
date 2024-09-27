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
        int n;
        cin >> n;

        ll cnt1 = 0, cnt2 = 0, mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                cnt1++;
                mx1 = max(mx1, x);
            }
            else
            {
                cnt2++;
                mx2 = max(mx2, x);
            }
        }

        cout << max(cnt1 + mx1, mx2 + cnt2) << '\n';
    }
    return 0;
}