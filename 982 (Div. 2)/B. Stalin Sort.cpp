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
        int mx = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 1e9;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] < v[j])
                    cnt++;
            }
            ans = min(ans, cnt + i);
        }

        cout << ans << '\n';
    }
    return 0;
}