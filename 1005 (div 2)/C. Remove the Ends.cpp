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
        vector<int> vv(all(v));
        ll ans = 0, res = 0;
        while (!vv.empty() and vv.front() > 0)
        {
            ans += vv.front();
            vv.erase(vv.begin());
        }
        while (!vv.empty() and vv.back() < 0)
        {
            ans += abs(vv.back());
            vv.pop_back();
        }
        ll sub_array_max = 0, sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                sum2 = 0;
                sum += abs(v[i]);
                sub_array_max = max(sum, sub_array_max);
            }
            else
            {
                sum = 0;
                sum2 += v[i];
                sub_array_max = max(sum2, sub_array_max);
            }
        }
        cout << max(ans, sub_array_max) << '\n';
    }
    return 0;
}