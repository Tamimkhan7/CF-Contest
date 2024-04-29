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
        string s;
        cin >> s;
        ll ans = 0;
        int k = 0;
        for (auto c : s)
        {
            if (c == '0')
                ans += (k == 0 ? 0 : k + 1);
            else
                k += 1;
        }
        cout << ans << "\n";
    }
    return 0;
}