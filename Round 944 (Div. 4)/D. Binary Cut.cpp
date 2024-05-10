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
        string s;
        cin >> s;
        int n = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '0')
                n = i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ans++;
        }
        if (ans == 0 || ans == 1)
            cout << ans + 1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}