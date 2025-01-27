#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
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
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_sum += v[i];
        }
        // sort(all(v));
        while (v.size() > 1)
        {
            // if (v[0] > v[v.size() - 1])
            int sum1 = 0, sum2 = 0;
            vector<int> vv, vvv;
            for (int i = 0; i < (int)v.size() - 1; i++)
            {
                int x = v[i + 1] - v[i];
                sum1 += x;
                vv.push_back(x);
            }
            reverse(all(v));
            for (int i = 0; i < (int)v.size() - 1; i++)
            {
                int x = v[i + 1] - v[i];
                sum2 += x;
                vvv.push_back(x);
            }
            v.clear();
            total_sum = max(total_sum, sum1);
            total_sum = max(total_sum, sum2);
            if (sum1 > sum2)
            {
                for (auto x : vv)
                    v.push_back(x);
            }
            else
            {
                for (auto x : vvv)
                    v.push_back(x);
            }
        }
        cout << max(total_sum, v[0]) << '\n';
    }
    return 0;
}