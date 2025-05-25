#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
            mp[a[i]]++;
        int ans = 0;
        for (auto [x, y] : mp)
        {
            if (y >= 3)
                ans += y / 3;
        }
        cout << ans << '\n';
    }
    return 0;
}