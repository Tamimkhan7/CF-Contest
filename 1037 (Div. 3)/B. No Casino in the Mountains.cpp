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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                cnt++;
            else
            {
                if (cnt == k)
                    ans++, i++;
                cnt = 0;
            }

            if (cnt == k)
            {
                ans++, i++;
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}