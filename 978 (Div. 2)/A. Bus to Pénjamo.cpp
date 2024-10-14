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
        int ans = 0, left = 0;
        for (int i = 0; i < n; i++)
        {
            if (r >= v[i] / 2)
            {
                ans += (v[i] / 2) * 2;
                r -= v[i] / 2;
                left += v[i] % 2;
            }
        }
        cout << ans << ' ' << r << ' ' << left << '\n';
        while (left > 1 and r > 1)
        {
            ans += 2;
            left -= 2, r -= 2;
        }
        if (r > 0 and left == 1)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}