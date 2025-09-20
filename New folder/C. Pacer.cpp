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

int main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> freq(m, 0);
        int maxA = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            maxA = max(maxA, x);
        }

        ll total = 0;
        for (int i = 0; i < m; i++)
            total += 1LL * i * freq[i];

        ll ans = total;
        ll curr = total;
        int cnt = 0;

        for (int s = 1; s < m; s++)
        {

            curr += 1LL * n;
            curr -= 1LL * m * freq[m - s];
            ans = min(ans, curr);
        }

        cout << ans << "\n";
    }
    return 0;
}
