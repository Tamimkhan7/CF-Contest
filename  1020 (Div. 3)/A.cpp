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
        string s;
        cin >> n >> s;
        int ans = 0, one_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one_cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ans += (one_cnt - 1);
            else
                ans += (one_cnt + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}