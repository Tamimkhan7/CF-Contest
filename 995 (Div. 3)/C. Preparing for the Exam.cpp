#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), b(k);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        unordered_map<int, int> mp;

        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }

        string ans = "";
        for (int i = 0; i < m; i++)
        {
            if ((mp[a[i]] == 0 and k == n - 1) || k == n)
                ans += '1';
            else
                ans += '0';
        }
        cout << ans << '\n';
    }
    return 0;
}
