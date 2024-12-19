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
        int ans = 1, cur;
        cin >> cur;
        for (int i = 1; i < n; i++)
        {
            int val;
            cin >> val;
            cur += val;
            int sqt = sqrt(cur);
            if (sqt * sqt == cur and sqt % 2)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}