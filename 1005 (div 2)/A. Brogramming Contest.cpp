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
        string s;
        cin >> s;
        reverse(all(s));
        if (s.size() == 1 and s[0] == '0')
        {
            cout << 0 << '\n';
            continue;
        }
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                pos = i;
        }
        int ans = 0;
        for (int i = 0; i <= pos; i++)
        {
            if (s[i] != s[i + 1])
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}