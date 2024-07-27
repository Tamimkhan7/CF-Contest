#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        priority_queue<pair<int, int>> p;
        for (int i = 0; i < n; i++)
            p.push({a[i], b[i]});

        ll ans = 0;
        while (k-- && !p.empty())
        {
            auto top = p.top();
            p.pop();
            ans += top.first;
            int value = top.first - top.second;
            if (value > 0)
                p.push({value, top.second});
        }
        cout << ans << '\n';
    }
    return 0;
}
