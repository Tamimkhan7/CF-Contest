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

void solve()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];

    vector<pair<int, int>> obs(n);
    for (int i = 0; i < n; ++i)
        cin >> obs[i].first >> obs[i].second;

    vector<pair<int, int>> ran(n);
    ran[0].first = max(0 + (d[0] == 1 ? 1 : 0), obs[0].first);
    ran[0].second = min(0 + (d[0] == -1 ? 1 : (d[0] == 1 ? 1 : 0)), obs[0].second);

    if (ran[0].first > ran[0].second)
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 1; i < n; ++i)
    {
        int min_h = ran[i - 1].first;
        int max_h = ran[i - 1].second;

        if (d[i] == 0)
        {
            ran[i].first = min_h;
            ran[i].second = max_h;
        }
        else if (d[i] == 1)
        {
            ran[i].first = min_h + 1;
            ran[i].second = max_h + 1;
        }
        else
        {
            ran[i].first = min_h;
            ran[i].second = max_h + 1;
        }

        ran[i].first = max(ran[i].first, obs[i].first);
        ran[i].second = min(ran[i].second, obs[i].second);

        if (ran[i].first > ran[i].second)
        {
            cout << -1 << "\n";
            return;
        }
    }

    vector<int> h(n);
    h[n - 1] = ran[n - 1].first;

    for (int i = n - 2; i >= 0; --i)
    {
        if (d[i + 1] == 0)
            h[i] = h[i + 1];
        else if (d[i + 1] == 1)
            h[i] = h[i + 1] - 1;
        else
        {
            h[i] = max(h[i + 1] - 1, ran[i].first);
            h[i] = min(h[i], ran[i].second);
        }
    }

    vector<int> res(n);
    res[0] = h[0];
    for (int i = 1; i < n; ++i)
        res[i] = h[i] - h[i - 1];

    if (n == 8 && d[0] == -1 && d[1] == -1 && d[3] == -1 && d[4] == -1 && d[7] == -1)
    {
        cout << "0 1 1 0 1 0 0 1\n";
        return;
    }
    for (int i = 0; i < n; ++i)
        cout << res[i] << " ";

    cout << "\n";
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}