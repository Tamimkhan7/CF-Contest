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
        int ans = (n / 15);
        int x = ans;
        ans = ans * 3;
        x *= 15;
        for (int i = x; i <= n; i++)
        {          
            if (i % 3 == i % 5)
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}