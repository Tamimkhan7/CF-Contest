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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        unordered_map<ll, int> pref_sum;
        pref_sum[0] = 1;
        ll sum = 0;
        int cnt = 0, r = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (pref_sum[sum])
            {
                cnt++;
                pref_sum.clear();
                pref_sum[0] = 1;
                sum = 0;
            }
            pref_sum[sum]++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
